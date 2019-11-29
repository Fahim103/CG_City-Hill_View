void drawSea()
{
    glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
    glPushMatrix();
        // This is the sea.
        glBegin(GL_QUADS);
            glColor3ub(0,119,190);
            glVertex2f(1.0f, -1.0f);
            glVertex2f(1.0f, -0.4f);
            glVertex2f(-1.0f, -0.4f);
            glVertex2f(-1.0f, -1.0f);
        glEnd();
    glPopMatrix();
}
