void drawHillViewSkyDay()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glPushMatrix();
    glColor3ub(77,195,255);
        glBegin(GL_QUADS);
            glVertex2f(-1.0f, 0.44f);
            glVertex2f(1.0f, 0.44f);
            glVertex2f(1.0f, 1.0f);
            glVertex2f(-1.0f, 1.0f);
        glEnd();
    glPopMatrix();
}


void drawHillViewSkyNight()
{
    glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
    glPushMatrix();
        // This is the sky.
        glColor3ub(44, 66, 105);
        glBegin(GL_QUADS);
            glVertex2f(-1.0f, 0.44f);
            glVertex2f(1.0f, 0.44f);
            glVertex2f(1.0f, 1.0f);
            glVertex2f(-1.0f, 1.0f);
        glEnd();
    glPopMatrix();
}

void drawHillViewStars()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glPushMatrix();

        glColor3ub(190, 190, 190);
        glBegin(GL_POLYGON);
            glVertex2f(-0.9f, 0.8f);
            glVertex2f(-0.891f, 0.815f);
            glVertex2f(-0.882f, 0.8f);
            glVertex2f(-0.891f, 0.785f);
        glEnd();

        glColor3ub(255, 255, 255);
        glBegin(GL_POLYGON);
            glVertex2f(-0.9f, 0.95f);
            glVertex2f(-0.891f, 0.965f);
            glVertex2f(-0.882f, 0.95f);
            glVertex2f(-0.891f, 0.935f);
        glEnd();

        glColor3ub(255, 255, 255);
        glBegin(GL_POLYGON);
            glVertex2f(-0.8f, 0.95f);
            glVertex2f(-0.791f, 0.965f);
            glVertex2f(-0.782f, 0.95f);
            glVertex2f(-0.791f, 0.935f);
        glEnd();

        glColor3ub(190, 190, 190);
        glBegin(GL_POLYGON);
            glVertex2f(-0.5f, 0.95f);
            glVertex2f(-0.491f, 0.965f);
            glVertex2f(-0.482f, 0.95f);
            glVertex2f(-0.491f, 0.935f);
        glEnd();

        glColor3ub(255, 255, 255);
        glBegin(GL_POLYGON);
            glVertex2f(-0.5f, 0.75f);
            glVertex2f(-0.491f, 0.765f);
            glVertex2f(-0.482f, 0.75f);
            glVertex2f(-0.491f, 0.735f);
        glEnd();

        glColor3ub(255, 255, 255);
        glBegin(GL_POLYGON);
            glVertex2f(-0.07f, 0.7f);
            glVertex2f(-0.061f, 0.715f);
            glVertex2f(-0.052f, 0.7f);
            glVertex2f(-0.061f, 0.685f);
        glEnd();

        glColor3ub(190, 190, 190);
        glBegin(GL_POLYGON);
            glVertex2f(0.029f, 0.8f);
            glVertex2f(0.02f, 0.815f);
            glVertex2f(0.011f, 0.8f);
            glVertex2f(0.02f, 0.785f);
        glEnd();

        glColor3ub(190, 190, 190);
        glBegin(GL_POLYGON);
            glVertex2f(0.089f, 0.9f);
            glVertex2f(0.08f, 0.915f);
            glVertex2f(0.071f, 0.9f);
            glVertex2f(0.08f, 0.885f);
        glEnd();

        glColor3ub(255, 255, 255);
        glBegin(GL_POLYGON);
            glVertex2f(0.009f, 0.6f);
            glVertex2f(0.0f, 0.615f);
            glVertex2f(-0.009f, 0.6f);
            glVertex2f(0.0f, 0.585f);
        glEnd();

        glColor3ub(190, 190, 190);
        glBegin(GL_POLYGON);
            glVertex2f(0.8f, 0.95f);
            glVertex2f(0.791f, 0.965f);
            glVertex2f(0.782f, 0.95f);
            glVertex2f(0.791f, 0.935f);
        glEnd();

        glColor3ub(255, 255, 255);
        glBegin(GL_POLYGON);
            glVertex2f(0.9f, 0.85f);
            glVertex2f(0.891f, 0.865f);
            glVertex2f(0.882f, 0.85f);
            glVertex2f(0.891f, 0.835f);
        glEnd();

    glPopMatrix();
}

void drawHillViewCloud(float speed)
{
	glLoadIdentity();
	glTranslatef(speed, 0.0f, 0.0f);

    glPushMatrix();
        glColor3ub(255, 255, 240);
        drawCircle(-0.6f, 0.7f, 0.06f);
        drawCircle(-0.55f, 0.75f, 0.06f);
        drawCircle(-0.50f, 0.7f, 0.06f);
        drawCircle(-0.55f, 0.65f, 0.06f);

        glColor3ub(255, 255, 240);
        drawCircle(0.7f, 0.7f, 0.06f);
        drawCircle(0.65f, 0.75f, 0.06f);
        drawCircle(0.60f, 0.7f, 0.06f);
        drawCircle(0.65f, 0.65f, 0.06f);

        glColor3ub(255, 255, 240);
        drawCircle(0.0f, 0.7f, 0.06f);
        drawCircle(0.05f, 0.75f, 0.06f);
        drawCircle(0.10f, 0.7f, 0.06f);
        drawCircle(0.05f, 0.65f, 0.06f);
    glPopMatrix();
}

void drawHillViewCloudNight(float speed)
{
	glLoadIdentity();
	glTranslatef(speed, 0.0f, 0.0f);

    glPushMatrix();
        glColor3ub(82, 105, 137);
        drawCircle(-0.6f, 0.7f, 0.06f);
        drawCircle(-0.55f, 0.75f, 0.06f);
        drawCircle(-0.50f, 0.7f, 0.06f);
        drawCircle(-0.55f, 0.65f, 0.06f);

        glColor3ub(255, 255, 240);
        drawCircle(0.7f, 0.7f, 0.06f);
        drawCircle(0.65f, 0.75f, 0.06f);
        drawCircle(0.60f, 0.7f, 0.06f);
        drawCircle(0.65f, 0.65f, 0.06f);

        glColor3ub(255, 255, 240);
        drawCircle(0.0f, 0.7f, 0.06f);
        drawCircle(0.05f, 0.75f, 0.06f);
        drawCircle(0.10f, 0.7f, 0.06f);
        drawCircle(0.05f, 0.65f, 0.06f);
    glPopMatrix();
}
