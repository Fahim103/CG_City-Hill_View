void drawString(float x, float y, char *string)
{
    glRasterPos2f(x, y);

    for (char* c=string; *c != '\0'; c++)
    {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, *c); // Updates the position
    }
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

/**
*  Function used for reference of coordinates
*/
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
