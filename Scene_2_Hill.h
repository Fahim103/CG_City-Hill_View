void drawHills()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glPushMatrix();
    float gap=0.0f;
    for(int i=1;i<5;i++)
    {
        glColor4ub(129,199,132,255);
        glBegin(GL_TRIANGLES);
        glVertex2f(0.5f-gap,0.44f);
        glColor4ub(27,94,32,255);
        glVertex2f(1.0f-gap,0.44f);
        glVertex2f(0.75f-gap,0.94f);
        glEnd();
        gap+=0.5;
    }

    float gap1=0.0f;
    for(int i=1;i<5;i++)
    {
        glColor4ub(129,199,132,255);
        glBegin(GL_TRIANGLES);
        glVertex2f(0.3f-gap1,0.44f);
        glColor4ub(27,94,32,255);
        glVertex2f(0.7f-gap1,0.44f);
        glVertex2f(0.5f-gap1,0.74f);
        glEnd();
        gap1+=0.5f;

    }
    glColor4ub(129,199,132,255);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.8f,0.44f);
    glColor4ub(27,94,32,255);
    glVertex2f(1.12f,0.44f);
    glVertex2f(1.0f,0.74f);
    glEnd();

    glPopMatrix();
}
