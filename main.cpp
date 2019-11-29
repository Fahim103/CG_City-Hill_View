#include <iostream>
#include <GL/gl.h>
#include<GL/glu.h>
#include <GL/glut.h>
#include<math.h>
#include <cstdlib>
#include<cstdio>
#include<cmath>
#include<string>

// Add the Header Files

// Scene 1 Header Files
#include "Scene_1_Sky.h" // This file includes the utilities header, so subsequent files can use utilities as well without including
#include "Scene_1_Left_Buildings.h"
#include "Scene_1_Hospital_Pharmacy.h"
#include "Scene_1_Sun_Moon.h"
#include "Scene_1_Tree_Bushes.h"
#include "Scene_1_Road_Cars.h"

// Scene 2 Header Files
#include "Scene_2_Sea.h"
#include "Scene_2_Ship.h"

using namespace std;

GLfloat sun_moon_position = 0.0f;
GLfloat sun_moon_speed = 0.01f;

GLfloat cloudPosition = 0.0f;
GLfloat cloudSpeed = 0.01f;
GLfloat firstCarPosition = 1.0f;
GLfloat secondCarPosition = 1.2f;

bool day = true;
bool night = false;
GLfloat sceneryChangeTimer = 1.0f;
float changeskycolor = 1.0f;

void mouseHandler(int button, int state, int mousex, int mousey)
{

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
            street_light();
            drawFirstCar(firstCarPosition);
            drawSecondCar(secondCarPosition);
            glPopMatrix();
        }
        // Night Code of Scene 1 will be in the else block
        else if(night)
        {
            glLoadIdentity();
            glPushMatrix();

            drawSkyNight();
            drawStars();
            drawMoon(sun_moon_position);

            drawCloudNight(cloudPosition);

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
            street_light();
            drawFirstCar(firstCarPosition);
            drawSecondCar(secondCarPosition);

            glPopMatrix();
        }
    }

    if (sceneryChangeTimer > 200)
    {
        //glScissor(0,0,1.0f,1.0f);
        glEnable(GL_SCISSOR_TEST);
        glScissor(0,0,1.0f,1.0f);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // (or whatever buffer you want to clear)
        glDisable(GL_SCISSOR_TEST);

        glClear(GL_DOUBLEBUFFER);
        glClear(GL_POLYGON);

        glLoadIdentity();
        glPushMatrix();

        drawSea();
        drawShip();

        glPopMatrix();
    }

    if(sceneryChangeTimer > 400)
    {
        //sceneryChangeTimer = 1.0f;
        exit(0); // Exit the application
    }

    sceneryChangeTimer++;
    //drawAxis();
    //cout<<"Sceneary Change Timer : " << sceneryChangeTimer << endl;
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
            night = true;
        }else if(night){
            night = false;
            day = true;
        }
    }

    if(cloudPosition > 2.1f)
        cloudPosition = -1.5f;

    if(firstCarPosition > 1.5f){
        firstCarPosition = -1.5f;
    }

    if(secondCarPosition < -1.5){
        secondCarPosition = 1.5f;
    }

    firstCarPosition += 0.1f;
	secondCarPosition -= 0.08f;
	glutTimerFunc(100, update, 0);

}


/**
 * Function to handle when any keyboard key is pressed
 */
void handleKeypress(unsigned char key, int x, int y)
{
    if(key == 'n'){
        night = true;
        day = false;
    }else if(key == 'd'){
        day = true;
        night = false;
    }
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

    glutKeyboardFunc(handleKeypress);
    glutTimerFunc(1000, update, 0);
    //glutMouseFunc(mouseHandler);

    glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
    glEnable(GL_BLEND);// you enable blending function

    init();
    glutMainLoop();
}
