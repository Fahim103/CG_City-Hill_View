//#include "utilities.h"

void drawSunCityView(float speed)
{
    glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glTranslatef(0.0f, speed, 0.0f);
    glPushMatrix();
        glColor3ub(252, 212, 64);
        drawCircle(0.0f, 0.8f, 0.09f);
    glPopMatrix();
}

void drawMoonCityView(float speed)
{
    glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	//glTranslatef(0.0f, speed, 0.0f);
    glPushMatrix();
        glColor3ub(248, 248, 255);
        drawCircle(0.4f, 0.8f, 0.09f);
    glPopMatrix();
}
