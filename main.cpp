#include <iostream>
#include <GL/gl.h>
#include<GL/glu.h>
#include <GL/glut.h>
#include<math.h>
#include <cstdlib>
#include<cstdio>
#include<cmath>
#include<string>

using namespace std;

GLfloat sun_moon_position = 0.0f;
GLfloat sun_moon_speed = 0.01f;

GLfloat cloudPosition = 0.0f;
GLfloat cloudSpeed = 0.01f;

bool day = true;

GLfloat sceneryChangeTimer = 1.0f;
float changeskycolor = 1.0f;

void drawSkyDay()
{
    glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
    glPushMatrix();
        // This is the sky.
        glBegin(GL_QUADS);
        glColor3ub(77,195,255);
        glVertex2f(-1.0f, -0.4f);
        glVertex2f(-1.0f, 1.0f);
        glVertex2f(1.0f, 1.0f);
        glVertex2f(1.0f, -0.4f);
    glEnd();
    glPopMatrix();
}

void drawString(float x, float y, char *string)
{
    glRasterPos2f(x, y);

    for (char* c=string; *c != '\0'; c++)
    {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, *c); // Updates the position
    }
}

void drawSkyNight()
{
    glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
    glPushMatrix();
        // This is the sky.
        glBegin(GL_QUADS);
        glColor3ub(44, 66, 105);
        glVertex2f(-1.0f, -0.4f);
        glVertex2f(-1.0f, 1.0f);
        glVertex2f(1.0f, 1.0f);
        glVertex2f(1.0f, -0.4f);
    glEnd();
    glPopMatrix();
}

void drawCircle(float x, float y, double radius)
{
    float x1,y1;
    glPushMatrix();
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x,y);
    for (float theta=1.0f; theta <= 360.0f; theta+=0.2)
    {
        x1 = x+sin(theta)*radius;
        y1 = y+cos(theta)*radius;
        glVertex2f(x1, y1);
    }
    glEnd();
    glPopMatrix();
}

void drawSun(float speed)
{
    glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glTranslatef(0.0f, speed, 0.0f);
    glPushMatrix();
        glColor3ub(255, 255, 0);
        drawCircle(0.0f, 0.8f, 0.09f);
    glPopMatrix();
}

void drawMoon(float speed)
{
    glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	//glTranslatef(0.0f, speed, 0.0f);
    glPushMatrix();
        glColor3ub(248, 248, 255);
        drawCircle(0.6f, 0.8f, 0.09f);
    glPopMatrix();
}

void drawStars()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glPushMatrix();
    glColor3ub(248, 248, 255);
        glBegin(GL_POLYGON);
            glVertex2f(0.1f, 0.6f);
            glVertex2f(0.0f, 0.7f);
            glVertex2f(-0.1f, 0.5f);
            glVertex2f(0.0f, 0.4f);
        glEnd();
    glPopMatrix();
}

void drawCloud(float speed)
{
	glLoadIdentity();
	glTranslatef(speed, 0.0f, 0.0f);

    glPushMatrix();
        glColor3ub(255, 255, 240);
        drawCircle(-0.5f, 0.7f, 0.06f);
        drawCircle(-0.45f, 0.75f, 0.06f);
        drawCircle(-0.40f, 0.7f, 0.06f);
        drawCircle(-0.45f, 0.65f, 0.06f);

        glColor3ub(255, 255, 240);
        drawCircle(0.5f, 0.7f, 0.06f);
        drawCircle(0.45f, 0.75f, 0.06f);
        drawCircle(0.40f, 0.7f, 0.06f);
        drawCircle(0.45f, 0.65f, 0.06f);
    glPopMatrix();
}

void drawBushes()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glPushMatrix();
        glColor3ub(10, 91, 6);
        drawCircle(-0.2f, -.4f, .13f);
        drawCircle(0.0f, -.38f, .10f);
        drawCircle(0.2f, -.4f, .13f);
    glPopMatrix();
}

void drawLeftTree()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glPushMatrix();
        // Tree Trunk
        glColor3ub(112, 91, 3);
        glBegin(GL_TRIANGLES);
            glVertex2f(-0.22f, -.35f);
            glVertex2f(-0.18f, -.35f);
            glVertex2f(-0.20f, 0.0f);
        glEnd();

        // Tree Leafs
        glColor3ub(5, 127, 34);

        glBegin(GL_TRIANGLES);
            glVertex2f(-0.26, -0.10);
            glVertex2f(-0.14, -0.10);
            glVertex2f(-0.20, 0.05);
        glEnd();

        glBegin(GL_TRIANGLES);
            glVertex2f(-0.26, -0.02);
            glVertex2f(-0.14, -0.02);
            glVertex2f(-0.20, 0.13);
        glEnd();

        glBegin(GL_TRIANGLES);
            glVertex2f(-0.26, 0.05);
            glVertex2f(-0.14, 0.05);
            glVertex2f(-0.20, 0.20);
        glEnd();
    glPopMatrix();
}

void drawRightTree()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glPushMatrix();
        // Tree Trunk
        glColor3ub(112, 91, 3);
        glBegin(GL_TRIANGLES);
            glVertex2f(0.22, -.35);
            glVertex2f(0.18, -.35);
            glVertex2f(0.20, 0.0);
        glEnd();

        // Tree Leafs
        glColor3ub(5, 127, 34);

        glBegin(GL_TRIANGLES);
            glVertex2f(0.26, -0.10);
            glVertex2f(0.14, -0.10);
            glVertex2f(0.20, 0.05);
        glEnd();

        glBegin(GL_TRIANGLES);
            glVertex2f(0.26, -0.02);
            glVertex2f(0.14, -0.02);
            glVertex2f(0.20, 0.13);
        glEnd();

        glBegin(GL_TRIANGLES);
            glVertex2f(0.26, 0.05);
            glVertex2f(0.14, 0.05);
            glVertex2f(0.20, 0.20);
        glEnd();

    glPopMatrix();
}

void drawMiddleTree()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glPushMatrix();
        // Tree Trunk
        glColor3ub(112, 91, 3);
        glBegin(GL_TRIANGLES);
            glVertex2f(-0.01f, -.35f);
            glVertex2f(0.02f, -.35f);
            glVertex2f(0.0f, -0.1f);
        glEnd();

        // Tree Leafs
        glColor3ub(21, 86, 7);

        glBegin(GL_TRIANGLES);
            glVertex2f(-0.05, -0.15);
            glVertex2f(0.05, -0.15);
            glVertex2f(0.0, 0.0);
        glEnd();

        glBegin(GL_TRIANGLES);
            glVertex2f(-0.05, -0.07);
            glVertex2f(0.05, -0.07);
            glVertex2f(0.0, 0.07);
        glEnd();

        glBegin(GL_TRIANGLES);
            glVertex2f(-0.05, 0.01);
            glVertex2f(0.05, 0.01);
            glVertex2f(0.0, 0.15);
        glEnd();

    glPopMatrix();
}

void drawRoad()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    // Main Road
    glBegin(GL_QUADS);
        glColor3f(0.4f, 0.4f, 0.4f);
        glVertex2f(-1.0f, -1.0f);
        glVertex2f(1.0f, -1.0f);
        glVertex2f(1.0f, -0.4f);
        glVertex2f(-1.0f, -0.4f);
    glEnd();
    glPushMatrix();
            //footpath
              glBegin(GL_POLYGON);
        glColor3ub(88,89,91);

            glVertex2f(-1,-0.4f);
            glVertex2f(1,-0.4f);
            glVertex2f(1,-0.46f);
            glVertex2f(-1,-0.46f);

            glEnd();

            //footpath_side
            glBegin(GL_POLYGON);
        glColor3ub(109,110,113);

            glVertex2f(-1,-0.46f);
            glVertex2f(1,-0.46f);
            glVertex2f(1,-0.52f);
            glVertex2f(-1,-0.52f);

            glEnd();

            //footpath_texture
               glBegin(GL_LINES);
        glColor3ub(188,190,192);

            glVertex2f(-1,-0.46f);
            glVertex2f(-0.98f,-0.52f);
            glVertex2f(-0.97f,-0.46f);
            glVertex2f(-0.95f,-0.52f);
            glVertex2f(-0.94f,-0.46f);
            glVertex2f(-0.92f,-0.52f);
            glVertex2f(-0.91f,-0.46f);
            glVertex2f(-0.89f,-0.52f);
            glVertex2f(-0.88f,-0.46f);
            glVertex2f(-0.86f,-0.52f);
            glVertex2f(-0.85f,-0.46f);
            glVertex2f(-0.83f,-0.52f);
            glVertex2f(-0.82f,-0.46f);
            glVertex2f(-0.80f,-0.52f);
            glVertex2f(-0.79f,-0.46f);
            glVertex2f(-0.77f,-0.52f);
            glVertex2f(-0.76f,-0.46f);
            glVertex2f(-0.74f,-0.52f);
            glVertex2f(-0.73f,-0.46f);
            glVertex2f(-0.71f,-0.52f);

            glVertex2f(-0.70f,-0.46f);
            glVertex2f(-0.68f,-0.52f);
            glVertex2f(-0.67f,-0.46f);
            glVertex2f(-0.65f,-0.52f);
            glVertex2f(-0.64f,-0.46f);
            glVertex2f(-0.62f,-0.52f);
            glVertex2f(-0.61f,-0.46f);
            glVertex2f(-0.59f,-0.52f);
            glVertex2f(-0.58f,-0.46f);
            glVertex2f(-0.56f,-0.52f);
            glVertex2f(-0.55f,-0.46f);
            glVertex2f(-0.53f,-0.52f);
            glVertex2f(-0.52f,-0.46f);
            glVertex2f(-0.50f,-0.52f);

            glVertex2f(-0.49f,-0.46f);
            glVertex2f(-0.47f,-0.52f);
            glVertex2f(-0.46f,-0.46f);
            glVertex2f(-0.44f,-0.52f);
            glVertex2f(-0.43f,-0.46f);
            glVertex2f(-0.41f,-0.52f);
            glVertex2f(-0.40f,-0.46f);
            glVertex2f(-0.38f,-0.52f);
            glVertex2f(-0.37f,-0.46f);
            glVertex2f(-0.35f,-0.52f);
            glVertex2f(-0.34f,-0.46f);
            glVertex2f(-0.32f,-0.52f);
            glVertex2f(-0.31f,-0.46f);
            glVertex2f(-0.29f,-0.52f);
            glVertex2f(-0.28f,-0.46f);
            glVertex2f(-0.26f,-0.52f);
            glVertex2f(-0.25f,-0.46f);
            glVertex2f(-0.23f,-0.52f);
            glVertex2f(-0.22f,-0.46f);
            glVertex2f(-0.20f,-0.52f);
            glVertex2f(-0.19f,-0.46f);
            glVertex2f(-0.17f,-0.52f);
            glVertex2f(-0.16f,-0.46f);
            glVertex2f(-0.14f,-0.52f);

            glVertex2f(-0.13f,-0.46f);
            glVertex2f(-0.11f,-0.52f);
            glVertex2f(-0.10f,-0.46f);
            glVertex2f(-0.08f,-0.52f);
            glVertex2f(-0.07f,-0.46f);
            glVertex2f(-0.05f,-0.52f);
            glVertex2f(-0.04f,-0.46f);
            glVertex2f(-0.02f,-0.52f);
            glVertex2f(-0.01f,-0.46f);
            glVertex2f(0.01f,-0.52f);

             glVertex2f(0.02f,-0.46f);
            glVertex2f(0.04f,-0.52f);
             glVertex2f(0.05f,-0.46f);
            glVertex2f(0.07f,-0.52f);
            glVertex2f(0.08f,-0.46f);
            glVertex2f(0.10f,-0.52f);
            glVertex2f(0.11f,-0.46f);
            glVertex2f(0.13f,-0.52f);
            glVertex2f(0.14f,-0.46f);
            glVertex2f(0.16f,-0.52f);
            glVertex2f(0.17f,-0.46f);
            glVertex2f(0.19f,-0.52f);
            glVertex2f(0.20f,-0.46f);
            glVertex2f(0.22f,-0.52f);
            glVertex2f(0.23f,-0.46f);
            glVertex2f(0.25f,-0.52f);
            glVertex2f(0.26f,-0.46f);
            glVertex2f(0.28f,-0.52f);
            glVertex2f(0.29f,-0.46f);
            glVertex2f(0.31f,-0.52f);
            glVertex2f(0.32f,-0.46f);
            glVertex2f(0.34f,-0.52f);
            glVertex2f(0.35f,-0.46f);
            glVertex2f(0.37f,-0.52f);
            glVertex2f(0.38f,-0.46f);
            glVertex2f(0.40f,-0.52f);
            glVertex2f(0.41f,-0.46f);
            glVertex2f(0.43f,-0.52f);
            glVertex2f(0.44f,-0.46f);
            glVertex2f(0.46f,-0.52f);
            glVertex2f(0.47f,-0.46f);
            glVertex2f(0.49f,-0.52f);
            glVertex2f(0.50f,-0.46f);
            glVertex2f(0.52f,-0.52f);


            glVertex2f(0.53f,-0.46f);
            glVertex2f(0.55f,-0.52f);
            glVertex2f(0.56f,-0.46f);
            glVertex2f(0.58f,-0.52f);
            glVertex2f(0.59f,-0.46f);
            glVertex2f(0.61f,-0.52f);
            glVertex2f(0.62f,-0.46f);
            glVertex2f(0.64f,-0.52f);
            glVertex2f(0.65f,-0.46f);
            glVertex2f(0.67f,-0.52f);
            glVertex2f(0.68f,-0.46f);
            glVertex2f(0.70f,-0.52f);
            glVertex2f(0.71f,-0.46f);
            glVertex2f(0.73f,-0.52f);
            glVertex2f(0.74f,-0.46f);
            glVertex2f(0.76f,-0.52f);
            glVertex2f(0.77f,-0.46f);
            glVertex2f(0.79f,-0.52f);
            glVertex2f(0.80f,-0.46f);
            glVertex2f(0.82f,-0.52f);
            glVertex2f(0.83f,-0.46f);
            glVertex2f(0.85f,-0.52f);
            glVertex2f(0.86f,-0.46f);
            glVertex2f(0.88f,-0.52f);
            glVertex2f(0.89f,-0.46f);
            glVertex2f(0.91f,-0.52f);
            glVertex2f(0.92f,-0.46f);
            glVertex2f(0.94f,-0.52f);
            glVertex2f(0.95f,-0.46f);
            glVertex2f(0.97f,-0.52f);
            glVertex2f(0.98f,-0.46f);
            glVertex2f(1,-0.52f);


            glEnd();


    //zebra_crossing
            glBegin(GL_POLYGON);
        glColor3ub(209,211,212);

            glVertex2f(0.2f,-0.55f);
            glVertex2f(0.4f,-0.55f);
            glVertex2f(0.4f,-0.60f);
            glVertex2f(0.2f,-0.60f);

            glEnd();


                glBegin(GL_POLYGON);
        glColor3ub(209,211,212);

            glVertex2f(0.2f,-0.65f);
            glVertex2f(0.4f,-0.65f);
            glVertex2f(0.4f,-0.70f);
            glVertex2f(0.2f,-0.70f);

            glEnd();


        glBegin(GL_POLYGON);
            glColor3ub(209,211,212);

            glVertex2f(0.2f,-0.75f);
            glVertex2f(0.4f,-0.75f);
            glVertex2f(0.4f,-0.80f);
            glVertex2f(0.2f,-0.80f);
        glEnd();


        glBegin(GL_POLYGON);
        glColor3ub(209,211,212);
            glVertex2f(0.2f,-0.85f);
            glVertex2f(0.4f,-0.85f);
            glVertex2f(0.4f,-0.90f);
            glVertex2f(0.2f,-0.90f);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(209,211,212);
            glVertex2f(0.2f,-0.95f);
            glVertex2f(0.4f,-0.95f);
            glVertex2f(0.4f,-1);
            glVertex2f(0.2f,-1);
        glEnd();

            //MID_LINE

        glBegin(GL_POLYGON);
        glColor3ub(209,211,212);
            glVertex2f(0.5f,-0.75f);
            glVertex2f(0.65f,-0.75f);
            glVertex2f(0.65f,-0.80f);
            glVertex2f(0.5f,-0.80f);
            glEnd();


        glBegin(GL_POLYGON);
        glColor3ub(209,211,212);
            glVertex2f(0.8f,-0.75f);
            glVertex2f(0.95f,-0.75f);
            glVertex2f(0.95f,-0.80f);
            glVertex2f(0.8f,-0.80f);
            glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(209,211,212);

            glVertex2f(-0.1f,-0.75f);
            glVertex2f(-0.25f,-0.75f);
            glVertex2f(-0.25f,-0.80f);
            glVertex2f(-0.1f,-0.80f);

            glEnd();

                   glBegin(GL_POLYGON);
        glColor3ub(209,211,212);

            glVertex2f(0.2f,-0.75f);
            glVertex2f(0.4f,-0.75f);
            glVertex2f(0.4f,-0.80f);
            glVertex2f(0.2f,-0.80f);

            glEnd();

            glPopMatrix();

}

void drawSecondBuilding()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glPushMatrix();
        glColor3ub(25,61,79);
        glBegin(GL_QUADS);
            glVertex2f(-0.42f,-0.41f);
            glVertex2f(-0.42f,0.61f);
            glVertex2f(-0.64f,0.61f);
            glVertex2f(-0.64f,-0.41f);
        glEnd();
        //window1
        glBegin(GL_POLYGON);
            glColor3ub(230,168,62);
            glVertex2f(-0.45f,0.48f);
            glVertex2f(-0.45f, 0.54f);
            glColor3ub(77,195,255);
            glVertex2f(-0.61f,0.54f);
            glVertex2f(-0.61f, 0.48f);
        glEnd();

        glBegin(GL_POLYGON);
            glColor3ub(230,168,62);
            glVertex2f(-0.45f,0.36f);
            glVertex2f(-0.45f, 0.42f);
            glColor3ub(77,195,255);
            glVertex2f(-0.61f,0.42f);
            glVertex2f(-0.61f, 0.36f);
        glEnd();

        glBegin(GL_POLYGON);
            glColor3ub(230,168,62);
            glVertex2f(-0.45f,0.24f);
            glVertex2f(-0.45f, 0.3f);
            glColor3ub(77,195,255);
            glVertex2f(-0.61f,0.3f);
            glVertex2f(-0.61f, 0.24f);
        glEnd();

        glBegin(GL_POLYGON);
            glColor3ub(230,168,62);
            glVertex2f(-0.45f,0.12f);
            glVertex2f(-0.45f, 0.18f);
            glColor3ub(77,195,255);
            glVertex2f(-0.61f,0.18f);
            glVertex2f(-0.61f, 0.12f);
        glEnd();

        glBegin(GL_POLYGON);
            glColor3ub(230,168,62);
            glVertex2f(-0.45f,0.01f);
            glVertex2f(-0.45f, 0.07f);
            glColor3ub(77,195,255);
            glVertex2f(-0.61f,0.07f);
            glVertex2f(-0.61f, 0.01f);
        glEnd();

        //gate2
        glBegin(GL_POLYGON);
            glColor3ub(230,168,62);
            glVertex2f(-0.5f,-0.41f);
            glVertex2f(-0.5f, -0.1f);
            glColor3ub(77,195,255);
            glVertex2f(-0.58f,-0.1f);
            glVertex2f(-0.58f, -0.41f);
        glEnd();
    glPopMatrix();
}

void drawfirstbuilding()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glPushMatrix();
        //glColor3ub(204,102,0);
        glColor3ub(127, 87, 56);
        glBegin(GL_POLYGON);
            glVertex2f(-0.95f,-0.41f);
            glVertex2f(-0.65f, -0.41f);
            glVertex2f(-0.65f, 0.78f);
            glVertex2f(-0.95f, 0.78f);
        glEnd();
        //bottom1
        glBegin(GL_POLYGON);
            glColor3ub(102,62,27);
            glVertex2f(-0.64f,0.78f);
            glVertex2f(-0.64f, 0.8f);
            glVertex2f(-0.96f,0.8f);
            glVertex2f(-0.96f, 0.78f);
        glEnd();
        //bottom2
        glBegin(GL_POLYGON);
            glColor3ub(122, 63, 10);
            glVertex2f(-0.67f,0.8f);
            glVertex2f(-0.67f, 0.85f);
            glVertex2f(-0.93f,0.85f);
            glVertex2f(-0.93f, 0.8f);
        glEnd();
        glBegin(GL_POLYGON);
            glColor3ub(201,122,50);
            glVertex2f(-0.72f,0.85f);
            glVertex2f(-0.72f, 0.9f);
            glVertex2f(-0.88f,0.9f);
            glVertex2f(-0.88f, 0.85f);
        glEnd();
        //building topmost
        glBegin(GL_POLYGON);
            glColor3ub(232,158,91);
            glVertex2f(-0.74f,0.9f);
            glVertex2f(-0.74f, 0.92f);
            glVertex2f(-0.86f,0.92f);
            glVertex2f(-0.86f, 0.9f);
        glEnd();

        // Right Windows
        float gap = 0;
        for(int i=0; i<5; i++)
        {
            glBegin(GL_QUADS);
                glColor3ub(230,168,62);

                glColor3ub(230,168,62);
                glVertex2f(-0.68f, 0.6f - gap);
                glVertex2f(-0.74f,0.6f - gap);
                glColor3ub(77,195,255);
                glVertex2f(-0.74f, 0.65f - gap);
                glVertex2f(-0.68f,0.65f - gap);
            glEnd();

            gap += 0.12f;
        }

        // Middle Windows
        gap = 0;
        for(int i=0; i<5; i++)
        {
            glBegin(GL_QUADS);
                glColor3ub(230,168,62);

                glColor3ub(230,168,62);
                glVertex2f(-0.83f, 0.6f - gap);
                glVertex2f(-0.77f,0.6f - gap);
                glColor3ub(77,195,255);
                glVertex2f(-0.77f, 0.65f - gap);
                glVertex2f(-0.83f,0.65f - gap);
            glEnd();

            gap += 0.12f;
        }

        // Left Windows
        gap = 0;
        for(int i=0; i<5; i++)
        {
            glBegin(GL_QUADS);
                glColor3ub(230,168,62);

                glColor3ub(230,168,62);
                glVertex2f(-0.91f, 0.6f - gap);
                glVertex2f(-0.86f,0.6f - gap);
                glColor3ub(77,195,255);
                glVertex2f(-0.86f, 0.65f - gap);
                glVertex2f(-0.91f,0.65f - gap);
            glEnd();

            gap += 0.12f;
        }

        //gate
        glBegin(GL_POLYGON);
            glColor3ub(230,168,62);
            glVertex2f(-0.76f,-0.41f);
            glVertex2f(-0.76f, -0.1f);
            glColor3ub(77,195,255);
            glVertex2f(-0.85f,-0.1f);
            glVertex2f(-0.85f, -0.41f);
        glEnd();
    glPopMatrix();
}

void drawThirdBuilding()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glPushMatrix();
        glColor3ub(12, 79, 102);
        glBegin(GL_QUADS);
            glVertex2f(-0.42f,-0.41f);
            glVertex2f(-0.22f,-0.41f);
            glVertex2f(-0.22f,0.76);
            glVertex2f(-0.42,0.76);
        glEnd();

        glColor3ub(7, 43, 61);
        glBegin(GL_QUADS);
            glVertex2f(-0.22f,-0.41f);
            glVertex2f(-0.17f,-0.41f);
            glVertex2f(-0.17f,0.73);
            glVertex2f(-0.22,0.76);
        glEnd();
    glPopMatrix();
}

void mouseHandler(int button, int state, int mousex, int mousey)
{

}

void drawAxis()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);
        glVertex2f(-1.0f, 0.0f);
        glVertex2f(1.0f, 0.0f);

        glVertex2f(0.0f, 1.0f);
        glVertex2f(0.0f, -1.0f);
    glEnd();

}

void drawHospital()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glPushMatrix();

    //front side
    glColor3ub(76,99,35);
    glBegin(GL_QUADS);
    glVertex2f(0.60f,-0.41f);
    glVertex2f(0.98f,-0.41f);
    glVertex2f(0.98f,0.8f);
    glVertex2f(0.60f,0.8f);
    glEnd();

    //Left side
    glColor3ub(6,130,97);
    glBegin(GL_QUADS);
    glVertex2f(0.53f,-0.41f);
    glVertex2f(0.60f,-0.41f);
    glVertex2f(0.60f,0.8f);
    glVertex2f(0.53f,0.69f);
    glEnd();

    //Hospital Name
    glColor3ub(230,123,100);
    glBegin(GL_POLYGON);
    glVertex2f(0.63f,0.65f);
    glVertex2f(0.95f,0.65f);
    glVertex2f(0.95f,0.76f);
    glVertex2f(0.63f,0.76f);
    glEnd();

    glColor3ub(0, 0, 0);
    drawString(0.69f, 0.69f, "General Hospital");

    //big window
    float gap=0.0f;
    for(int i=1;i<6;i++)
    {
        glColor3ub(230,168,62);
        glBegin(GL_QUADS);
        glVertex2f(0.85f,0.53f-gap);
        glVertex2f(0.95f,0.53f-gap);
        glColor3ub(77,195,255-gap);
        glVertex2f(0.95f,0.62f-gap);
        glVertex2f(0.85f,0.62f-gap);
        glEnd();
        gap+=0.17;
    }


    //small windows
    float gap1=0.0f,gap2=0.07;
    for(int i=1;i<6;i++)
    {
        glColor3ub(230,168,62);
        glBegin(GL_QUADS);
        glVertex2f(0.65f,0.53f -gap1);
        glVertex2f(0.71f,0.53f-gap1);
        glColor3ub(77,195,255);
        glVertex2f(0.71f,0.62f-gap1);
        glVertex2f(0.65f,0.62f-gap1);
        glEnd();

        glColor3ub(230,168,62);
        glBegin(GL_QUADS);
        glVertex2f(0.65f+gap2,0.53f-gap1);
        glVertex2f(0.71f+gap2,0.53f-gap1);
        glColor3ub(77,195,255);
        glVertex2f(0.71f+gap2,0.62f-gap1);
        glVertex2f(0.65f+gap2,0.62f-gap1);
        glEnd();

        gap1+=0.17;
    }

    //Door
    glBegin(GL_QUADS);
    glColor3ub(230,168,62);
    glVertex2f(0.73f,-0.41f);
    glVertex2f(0.90f,-0.41f);
    glColor3ub(77,195,255);
    glVertex2f(0.90f,-0.20f);
    glVertex2f(0.73f,-0.20f);
    glEnd();


    glPopMatrix();
}

void drawPharmacy()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glPushMatrix();

    //front side
    glColor3ub(35,76,150);
    glBegin(GL_QUADS);
    glVertex2f(0.36f,-0.41f);
    glVertex2f(0.64f,-0.41f);
    glVertex2f(0.64f,-0.08f);
    glVertex2f(0.36f,-0.08f);
    glEnd();

    //Left Side
    glColor3ub(0,10,50);
    glBegin(GL_QUADS);
    glVertex2f(0.3f,-0.41f);
    glVertex2f(0.36f,-0.41f);
    glVertex2f(0.36f,-0.01f);
    glVertex2f(0.3f,-0.08f);
    glEnd();

    //Name
    glColor3ub(0,10,50);
    glBegin(GL_QUADS);
    glVertex2f(0.36f,-0.08f);
    glVertex2f(0.64f,-0.08f);
    glVertex2f(0.64f,-0.01f);
    glVertex2f(0.36f,-0.01f);
    glEnd();


    //Mirror
    glColor3ub(230,168,62);
    glBegin(GL_QUADS);
    glVertex2f(0.38f,-0.28f);
    glVertex2f(0.62f,-0.28f);
    glColor3ub(77,195,255);
    glVertex2f(0.62f,-0.15f);
    glVertex2f(0.38f,-0.15f);
    glEnd();
    glPopMatrix();

}


void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    if (sceneryChangeTimer > 0)
    {
        if(day)
        {
            glLoadIdentity();
            glPushMatrix();

            drawSkyDay();
            drawSun(sun_moon_position);
            drawCloud(cloudPosition);

            drawLeftTree();
            drawRightTree();
            drawMiddleTree();

            drawBushes();

            drawfirstbuilding();
            drawSecondBuilding();
            drawThirdBuilding();

            drawHospital();
            drawPharmacy();

            drawRoad();
            glPopMatrix();
        }
        // Night Code of Scene 1 will be in the else block
        else
        {
            glLoadIdentity();
            glPushMatrix();

            drawSkyNight();
            drawStars();
            drawMoon(sun_moon_position);
            drawCloud(cloudPosition);

            drawLeftTree();
            drawRightTree();
            drawMiddleTree();

            drawBushes();

            drawfirstbuilding();
            drawSecondBuilding();
            drawThirdBuilding();

            drawHospital();
            drawPharmacy();

            drawRoad();
            glPopMatrix();
        }

    }


    if (sceneryChangeTimer > 200)
    {
        glScissor(0,0,1.0f,1.0f);
        glEnable(GL_SCISSOR_TEST);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // (or whatever buffer you want to clear)
        glDisable(GL_SCISSOR_TEST);

        glLoadIdentity();
        glPushMatrix();

        drawRoad();

        glPopMatrix();
    }

    if(sceneryChangeTimer > 400)
    {
        sceneryChangeTimer = 0.0f;
    }


    sceneryChangeTimer++;
    //drawAxis();
    cout<<"Sceneary Change Timer : " << sceneryChangeTimer << endl;
    glFlush();
}

void update(int value)
{
    glutPostRedisplay();

    sun_moon_position -= sun_moon_speed;
    cloudPosition += cloudSpeed;

    if(sun_moon_position < -1.2f)
    {
        sun_moon_position = 1.01f;
        if(day)
        {
            day = false;
        }else{
            day = true;
        }
    }

    if(cloudPosition > 2.1f)
        cloudPosition = -1.5f;

	glutTimerFunc(100, update, 0);

}

void init()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    //gluOrtho2D(0.0, 1280.0, 0.0, 720.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(1280, 720);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("CITY VIEW");
    glutDisplayFunc(display);

    glutTimerFunc(1000, update, 0);
    //glutMouseFunc(mouseHandler);

    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glEnable(GL_BLEND);// you enable blending function

    init();
    glutMainLoop();
}
