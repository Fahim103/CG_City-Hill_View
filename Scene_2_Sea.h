void drawSea()
{
    glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
    glPushMatrix();
        // This is the sea.
        glBegin(GL_QUADS);
            glColor3ub(51,153,255);
            glVertex2f(1.0f, -1.0f);
            glColor3ub(128,212,255);
            glColor3ub(77,195,255);
            glVertex2f(1.0f, -0.4f);
            glColor3ub(128,212,255);
            glVertex2f(-1.0f, -0.4f);
            glColor3ub(0,102,153);
            glVertex2f(-1.0f, -1.0f);
        glEnd();
    glPopMatrix();
}
