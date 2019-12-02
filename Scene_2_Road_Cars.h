void drawRoadHillView()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glPushMatrix();
        // Main Road
        glColor3f(0.4f, 0.4f, 0.4f);
        glBegin(GL_QUADS);
            glVertex2f(-1.0f, -0.4f);
            glVertex2f(1.0f, -0.4f);
            glVertex2f(1.0f,0.2f);
            glVertex2f(-1.0f,0.2f);
        glEnd();

        // Middle lines of the roads to differentiate lanes
        glColor3f(1.0f, 1.0f, 1.0f);
        float xDifference = 0.0;
        for(int i=0; i<10; i++){
            glBegin(GL_QUADS);
                glVertex2f(-0.95f + xDifference, -0.09f);
                glVertex2f(-0.85f + xDifference, -0.09f);
                glVertex2f(-0.85f + xDifference, -0.11f);
                glVertex2f(-0.95f + xDifference, -0.11f);
            glEnd();
            xDifference += 0.2f;
        }
    glPopMatrix();
}
