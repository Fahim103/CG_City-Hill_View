void drawSunHillView(float speed)
{
    glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glTranslatef(0.0f, speed, 0.0f);
    glPushMatrix();
        glColor3ub(255, 255, 0);
        drawCircle(0.0f, 0.8f, 0.09f);
    glPopMatrix();
}

void drawMoonHillView(float speed)
{
    glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	//glTranslatef(0.0f, speed, 0.0f);
    glPushMatrix();
        glColor3ub(248, 248, 255);
        drawCircle(0.5f, 0.88f, 0.09f);
    glPopMatrix();
}
