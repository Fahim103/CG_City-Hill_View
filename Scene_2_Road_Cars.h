void drawRoadHillView()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glPushMatrix();
        glColor3f(0.4f, 0.4f, 0.4f);
        glBegin(GL_QUADS);
            glVertex2f(-1.0f, -0.4f);
            glVertex2f(1.0f, -0.4f);
            glVertex2f(1.0f,0.2f);
            glVertex2f(-1.0f,0.2f);
        glEnd();
    glPopMatrix();
}
