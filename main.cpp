#include <iostream>
#include <GL/gl.h>
#include<GL/glu.h>
#include <GL/glut.h>
#include<math.h>
#include <cstdlib>
#include<cstdio>
#include<cmath>

using namespace std;

GLfloat sun_moon_position = 0.0f;
GLfloat sun_moon_speed = 0.005f;

GLfloat cloudPosition = 0.0f;
GLfloat cloudSpeed = 0.005f;

void drawSky()
{
    glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
    glPushMatrix();
        // This is the sky.
        glBegin(GL_QUADS);
        //glColor3f(0.0f, 0.8f, 1.0f);

        glColor3ub(77,195,255);
        glVertex2f(-1.0f, -0.4f);

        glColor3ub(230,168,62);
        glVertex2f(-1.0f, 1.0f);

//        glColor3ub(77,195,255);
        glVertex2f(1.0f, 1.0f);
        //glColor3ub(77,195,255);
        glColor3ub(230,168,62);
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
        glColor3ub(22, 201,123);
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
        glColor3ub(109,76,65);
        glBegin(GL_TRIANGLES);
            glVertex2f(-0.22f, -.35f);
            glVertex2f(-0.18f, -.35f);
            glVertex2f(-0.20f, 0.0f);
        glEnd();

        // Tree Leafs
        glColor3ub(178,255,89);

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
        glColor3ub(109,76,65);
        glBegin(GL_TRIANGLES);
            glVertex2f(0.22, -.35);
            glVertex2f(0.18, -.35);
            glVertex2f(0.20, 0.0);
        glEnd();

        // Tree Leafs
        glColor3ub(178,255,89);

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
        glColor3ub(109,76,65);
        glBegin(GL_TRIANGLES);
            glVertex2f(-0.01f, -.35f);
            glVertex2f(0.02f, -.35f);
            glVertex2f(0.0f, -0.1f);
        glEnd();

        // Tree Leafs
        glColor3ub(178,255,89);

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
        glColor3ub(0,77,153);
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
        glColor3ub(204,102,0);
        glBegin(GL_POLYGON);
            glVertex2f(-0.95f,-0.41f);
            glVertex2f(-0.65f, -0.41f);
            glVertex2f(-0.65f, 0.78f);
            glVertex2f(-0.95f, 0.78f);
        glEnd();
        //bottom1
        glBegin(GL_POLYGON);
            glColor3ub(102,51,0);
            glVertex2f(-0.64f,0.78f);
            glVertex2f(-0.64f, 0.8f);
            glVertex2f(-0.96f,0.8f);
            glVertex2f(-0.96f, 0.78f);
        glEnd();
        //bottom2
        glBegin(GL_POLYGON);
            glColor3ub(150,75,0);
            glVertex2f(-0.67f,0.8f);
            glVertex2f(-0.67f, 0.85f);
            glVertex2f(-0.93f,0.85f);
            glVertex2f(-0.93f, 0.8f);
        glEnd();
        glBegin(GL_POLYGON);
            glColor3ub(252,127,0);
            glVertex2f(-0.72f,0.85f);
            glVertex2f(-0.72f, 0.9f);
            glVertex2f(-0.88f,0.9f);
            glVertex2f(-0.88f, 0.85f);
        glEnd();
        //building topmost
        glBegin(GL_POLYGON);
            glColor3ub(252,192,88);
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
        glColor3ub(61,110,209);
        glBegin(GL_QUADS);
            glVertex2f(-0.42f,-0.41f);
            glVertex2f(-0.22f,-0.41f);
            glVertex2f(-0.22f,0.76);
            glVertex2f(-0.42,0.76);
        glEnd();

        glColor3ub(35,63,120);
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

void drawFourthBuilding()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glPushMatrix();

    //front side
    glColor3ub(76,99,35);
    glBegin(GL_QUADS);
    glVertex2f(0.75f,-0.41f);
    glVertex2f(0.98f,-0.41f);
    glVertex2f(0.98f,0.8f);
    glVertex2f(0.75f,0.8f);
    glEnd();

    //Left side
    glColor3ub(6,130,97);
    glBegin(GL_QUADS);
    glVertex2f(0.68f,-0.41f);
    glVertex2f(0.75f,-0.41f);
    glVertex2f(0.75f,0.8f);
    glVertex2f(0.68f,0.75f);
    glEnd();

    //Window1
    /*glColor3ub(230,168,62);
    glBegin(GL_QUADS);
    glVertex2f(0.85f,0.56f);
    glVertex2f(0.95f,0.56f);
    glColor3ub(77,195,255);
    glVertex2f(0.95f,0.65f);
    glVertex2f(0.85f,0.65f);
    glEnd();*/

    //windows
    float gap=0.0f;
    for(int i=1;i<6;i++)
    {
        glColor3ub(230,168,62);
        glBegin(GL_QUADS);
        glVertex2f(0.85f,0.56f -gap);
        glVertex2f(0.95f,0.56f-gap);
        glColor3ub(77,195,255);
        glVertex2f(0.95f,0.65f-gap);
        glVertex2f(0.85f,0.65f-gap);
        glEnd();
        gap+=0.17;
    }




    glPopMatrix();
}

void drawFifthBuilding()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glPushMatrix();
    //front side
    glColor3ub(7,71,62);
    glBegin(GL_POLYGON);
    glVertex2f(0.58f,-0.41f);
    glVertex2f(0.82f,-0.41f);
    glVertex2f(0.82f,0.65f);
    glVertex2f(0.58f,0.65f);
    glEnd();

    //Left side
    glBegin(GL_POLYGON);
    glColor3ub(7,43,61);
    glVertex2f(0.47f,-0.41f);//0.43
    glVertex2f(0.58f,-0.41f);//00.43
    glVertex2f(0.58f,0.65f);
    glVertex2f(0.47f,0.59f);
    glEnd();

    //windows
    float gapy=0.0f,gapx=0.0f;
    for(int i=1;i<6;i++)
    {
        glColor3ub(230,168,62);
        glBegin(GL_QUADS);
        glVertex2f(0.61f,0.5f-gapy);
        glVertex2f(0.68f,0.5f-gapy);
        glColor3ub(77,195,255);
        glVertex2f(0.68f,0.6f-gapy);
        glVertex2f(0.61f,0.6f-gapy);
        glEnd();
        gapy+=0.18f;
    }
    /*
    for(int i=1;i<6;i++)
    {
        glColor3ub(230,168,62);
        glBegin(GL_QUADS);
        glVertex2f(0.71f+gapx,0.5f);
        glVertex2f(0.78f+gapx,0.5f);
        glColor3ub(77,195,255);
        glVertex2f(0.78f+gapx,0.6f);
        glVertex2f(0.71f+gapx,0.6f);
        glEnd();
        gapx+=0.1f;
    }*/
    /*glColor3ub(230,168,62);
    glBegin(GL_QUADS);
    glVertex2f(0.61f,0.5f);
    glVertex2f(0.68f,0.5f);
    glColor3ub(77,195,255);
    glVertex2f(0.68f,0.6f);
    glVertex2f(0.61f,0.6f);
    glEnd();*/


    glPopMatrix();
}

void drawSixthBuilding()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glPushMatrix();
    // Front Side
    glColor3ub(71,73,5);
    glBegin(GL_POLYGON);
    glVertex2f(0.36f,-0.41f);
    glVertex2f(0.61f,-0.41f);
    glVertex2f(0.61f,0.43f);
    glVertex2f(0.36f,0.43f);
    glEnd();

    //Left Side

    glColor3ub(71,3,5);
    glBegin(GL_POLYGON);
    glVertex2f(0.3f,-0.41f);
    glVertex2f(0.36f,-0.41f);
    glVertex2f(0.36,0.43f);
    glVertex2f(0.3f,0.39f);
    glEnd();




    glPopMatrix();
}

void display()
{

    drawSky();
    drawSun(sun_moon_position);
    drawCloud(cloudPosition);

    drawLeftTree();
    drawRightTree();
    drawMiddleTree();

    drawBushes();

    drawfirstbuilding();
    drawSecondBuilding();
    drawThirdBuilding();

    drawFourthBuilding();
    drawFifthBuilding();
    drawSixthBuilding();

    drawRoad();
    //drawAxis();
    glFlush();
}

void update(int value)
{
    glutPostRedisplay();

    sun_moon_position -= sun_moon_speed;
    cloudPosition += cloudSpeed;

    if(sun_moon_position < -1.2f)
        sun_moon_position = 1.2f;

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

    init();
    glutMainLoop();
}
