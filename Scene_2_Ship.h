void drawShip()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glPushMatrix();
        //ship
        glBegin(GL_POLYGON);
            glColor3ub(38,38,38);
            glVertex2f(-0.26f,-0.8f);
            glVertex2f(0.37f, -0.8f);

            glColor3ub(131,131,131);
            glVertex2f(0.4f,-0.5f);
            glVertex2f(0.32f,-0.5f);
            glVertex2f(0.31f, -0.55f);
            glVertex2f(-0.37f,-0.55f);
        glEnd();

        //shipbottom
        glBegin(GL_POLYGON);
            glColor3ub(255,255,255);
            glVertex2f(-0.23f,-0.55f);
            glVertex2f(0.22f, -0.55f);
            glVertex2f(0.22f,-0.48f);
            glVertex2f(-0.23f,-0.48f);
       glEnd();

       //shipbottomtop
        glBegin(GL_POLYGON);
            glColor3ub(38,38,38);
            glVertex2f(-0.24f,-0.48f);
            glVertex2f(0.23f, -0.48f);

            glVertex2f(0.23f,-0.46f);
            glVertex2f(-0.24f,-0.46f);

       glEnd();

       //ship2
        glBegin(GL_POLYGON);
            glColor3ub(255,255,255);
            glVertex2f(-0.18f,-0.46f);
            glVertex2f(0.18f, -0.46f);
            glVertex2f(0.18f,-0.37f);
            glVertex2f(-0.18f,-0.37f);
       glEnd();

       //ship2top
       glBegin(GL_POLYGON);
            glColor3ub(38,38,38);
            glVertex2f(-0.19f,-0.37f);
            glVertex2f(0.19f, -0.37f);
            glVertex2f(0.19f,-0.35f);
            glVertex2f(-0.19f,-0.35f);
       glEnd();

       //redline
       glBegin(GL_POLYGON);
            glColor3ub(255,0,0);
            glVertex2f(-0.301f,-0.7f);
            glVertex2f(0.38f, -0.7f);

            glVertex2f(0.385f,-0.68f);
            glVertex2f(-0.315f,-0.68f);
       glEnd();
    glPopMatrix();
}
