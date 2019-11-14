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
        glColor3f(0.0f, 0.8f, 1.0f);
        glVertex2f(-1.0f, -0.2f);
        glVertex2f(-1.0f, 1.0f);
        glVertex2f(1.0f, 1.0f);
        glVertex2f(1.0f, -0.2f);
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
        drawCircle(-0.2f, -.18f, .13f);
        drawCircle(0.0f, -.20f, .10f);
        drawCircle(0.2f, -.18f, .13f);
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
            glVertex2f(-0.22f, -.15f);
            glVertex2f(-0.18f, -.15f);
            glVertex2f(-0.20f, .20f);
        glEnd();

        // Tree Leafs
        glColor3ub(178,255,89);

        glBegin(GL_TRIANGLES);
            glVertex2f(-0.26, 0.10);
            glVertex2f(-0.14, 0.10);
            glVertex2f(-0.20, 0.20);
        glEnd();

        glBegin(GL_TRIANGLES);
            glVertex2f(-0.26, 0.15);
            glVertex2f(-0.14, 0.15);
            glVertex2f(-0.20, 0.25);
        glEnd();

        glBegin(GL_TRIANGLES);
            glVertex2f(-0.26, 0.20);
            glVertex2f(-0.14, 0.20);
            glVertex2f(-0.20, 0.30);
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
            glVertex2f(0.22f, -.15f);
            glVertex2f(0.18f, -.15f);
            glVertex2f(0.20f, .20f);
        glEnd();

        // Tree Leafs
        glColor3ub(178,255,89);

        glBegin(GL_TRIANGLES);
            glVertex2f(0.26, 0.10);
            glVertex2f(0.14, 0.10);
            glVertex2f(0.20, 0.20);
        glEnd();

        glBegin(GL_TRIANGLES);
            glVertex2f(0.26, 0.15);
            glVertex2f(0.14, 0.15);
            glVertex2f(0.20, 0.25);
        glEnd();

        glBegin(GL_TRIANGLES);
            glVertex2f(0.26, 0.20);
            glVertex2f(0.14, 0.20);
            glVertex2f(0.20, 0.30);
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
            glVertex2f(-0.01f, -.15f);
            glVertex2f(0.02f, -.15f);
            glVertex2f(0.0f, .05f);
        glEnd();

        // Tree Leafs
        glColor3ub(178,255,89);

        glBegin(GL_TRIANGLES);
            glVertex2f(-0.05, 0.01);
            glVertex2f(0.05, 0.01);
            glVertex2f(0.0, 0.1);
        glEnd();

        glBegin(GL_TRIANGLES);
            glVertex2f(-0.05, 0.07);
            glVertex2f(0.05, 0.07);
            glVertex2f(0.0, 0.16);
        glEnd();

        glBegin(GL_TRIANGLES);
            glVertex2f(-0.05, 0.14);
            glVertex2f(0.05, 0.14);
            glVertex2f(0.0, 0.25);
        glEnd();

    glPopMatrix();
}

void drawRoad()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glPushMatrix();
        glColor3f(0.4f, 0.4f, 0.4f);
        glBegin(GL_QUADS);
            glVertex2f(-1.0f, -1.0f);
            glVertex2f(1.0f, -1.0f);
            glVertex2f(1.0f, -0.4f);
            glVertex2f(-1.0f, -0.4f);
        glEnd();
    glPopMatrix();
}

void mouseHandler(int button, int state, int mousex, int mousey)
{

}

void display()
{
    drawSky();
    drawRoad();

    drawLeftTree();
    drawRightTree();
    drawMiddleTree();

    drawBushes();

    drawSun(sun_moon_position);
    drawCloud(cloudPosition);

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
