void drawRestaurant()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glPushMatrix();
    //front side
    glColor3ub(85,107,47);
    glBegin(GL_POLYGON);
    glVertex2f(0.5f,0.23f);
    glVertex2f(0.95f,0.23f);
    glVertex2f(0.95f,0.56f);
    glVertex2f(0.5f,0.56f);
    glEnd();

    //left side
    glColor3ub(0,0,255);
    glBegin(GL_POLYGON);
    glVertex2f(0.45f,0.23f);
    glVertex2f(0.5f,0.23f);
    glVertex2f(0.5f,0.64f);
    glVertex2f(0.45f,0.59f);
    glEnd();

    //Name
    glColor3ub(0,50,255);
    glBegin(GL_QUADS);
    glVertex2f(0.5f,0.56f);
    glVertex2f(0.95f,0.56f);
    glVertex2f(0.95f,0.64f);
    glVertex2f(0.5f,0.64f);
    glEnd();

    glColor3ub(0,0,0);
    drawString(0.65f,0.58f,"Restaurant");

    //mirror
    glColor3ub(230,168,62);
    glBegin(GL_QUADS);
    glVertex2f(0.5f,0.25+0.04f);
    glVertex2f(0.95f,0.25+0.04f);
    glColor3ub(77,195,255);
    glVertex2f(0.95f,0.45+0.04f);
    glVertex2f(0.5f,0.45+0.04f);
    glEnd();
    glPopMatrix();

}

void drawResturant2()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glPushMatrix();
    //front side
    glColor3ub(85,107,47);
    glBegin(GL_POLYGON);

    glVertex2f(-0.95f,0.23f);
    glVertex2f(-0.5f,0.23f);
    glVertex2f(-0.5f,0.56f);
    glVertex2f(-0.95f,0.56f);
    glEnd();

    //left side
    glColor3ub(0,0,255);
    glBegin(GL_POLYGON);

    glVertex2f(-0.5f,0.23f);
    glVertex2f(-0.45f,0.23f);
    glVertex2f(-0.45f,0.59f);
    glVertex2f(-0.5f,0.64f);
    glEnd();

    //Name
    glColor3ub(0,50,255);
    glBegin(GL_QUADS);
    glVertex2f(-0.5f,0.56f);
    glVertex2f(-0.95f,0.56f);
    glVertex2f(-0.95f,0.64f);
    glVertex2f(-0.5f,0.64f);
    glEnd();

    glColor3ub(0,0,0);
    drawString(-0.8f,0.58f,"Resturant");

    //mirror
    glColor3ub(230,168,62);
    glBegin(GL_QUADS);
    glVertex2f(-0.5f,0.29f);
    glVertex2f(-0.95f,0.29f);
    glColor3ub(77,195,255);
    glVertex2f(-0.95f,0.49f);
    glVertex2f(-0.5f,0.49f);
    glEnd();
    glPopMatrix();

}
