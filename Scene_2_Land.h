void drawBackgroundMaskOfLand()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glPushMatrix();

    glColor3ub(255, 255, 255);
    glBegin(GL_QUADS);
    glVertex2f(-1.0f,0.2f);
    glVertex2f(1.0f,0.2f);
    glVertex2f(1.0f,0.44f);
    glVertex2f(-1.0f,0.44f);
    glEnd();
    glPopMatrix();
}

void drawLand()
{
    drawBackgroundMaskOfLand();

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glPushMatrix();

    glColor4ub(97, 201, 133,150);
    glBegin(GL_QUADS);
    glVertex2f(-1.0f,0.2f);
    glVertex2f(1.0f,0.2f);

    glColor4ub(255, 245, 157,255);
    glVertex2f(1.0f,0.44f);
    glVertex2f(-1.0f,0.44f);
    glEnd();
    glPopMatrix();
}
