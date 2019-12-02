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

void drawBooth()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glPushMatrix();

    //front side
    glBegin(GL_QUADS);
    glColor3ub(150, 3, 3);
    glVertex2f(0.39f,0.21f);
    glVertex2f(0.5f,0.21f);
    glVertex2f(0.5f,0.5f);
    glVertex2f(0.39f,0.5f);
    glEnd();

    //upper side
    glColor3ub(150, 3, 3);
    glBegin(GL_POLYGON);
    glVertex2f(0.39f,0.5f);
    glVertex2f(0.5f,0.5f);
    glVertex2f(0.5f,0.58f);
    glVertex2f(0.445f,0.60f);
    glVertex2f(0.39f,0.58f);
    glEnd();

    //windows
    /*float tgap=0.0f,tgap1=0.0f;
    for(int i=1;i<4;i++)
    {
        glColor3ub(187,196,199);
        glBegin(GL_QUADS);
        glVertex2f(0.40f,0.43f-tgap);
        glVertex2f(0.435f,0.43f-tgap);
        glVertex2f(0.435f,0.49f-tgap);
        glVertex2f(0.40f,0.49f-tgap);
        glEnd();
        tgap+=0.08f;
    }*/
    //glColor3ub(128,167,172);

    //glass

    glBegin(GL_POLYGON);
    glColor3ub(230,168,62);
    glLineWidth(0.03f);
    glVertex2f(0.40f,0.22f);
    glVertex2f(0.495f,0.22f);
    glColor3ub(77,195,255);
    glVertex2f(0.495f,0.49f);
    glVertex2f(0.40f,0.49f);
    glEnd();

    //glass Line
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glLineWidth(7.0f);
    glVertex2f(0.42f,0.49f);
    glVertex2f(0.42f,0.22f);

    glVertex2f(0.47f,0.49f);
    glVertex2f(0.47f,0.22f);

    glVertex2f(0.40f,0.4225);
    glVertex2f(0.495f,0.4225);

    glVertex2f(0.40f,0.355f);
    glVertex2f(0.495f,0.355f);

    glVertex2f(0.40f,0.2875f);
    glVertex2f(0.495f,0.2875f);

    glEnd();

    //name
    glColor3ub(218, 212,217);
    glBegin(GL_QUADS);
    glVertex2f(0.395f,0.52f);
    glVertex2f(0.495f,0.52f);
    glVertex2f(0.495f,0.56f);
    glVertex2f(0.395,0.56f);
    glEnd();
    glColor3ub(0,0,0);
    drawString(0.405f,0.52f,"Booth");

    //upper and window divider
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(0.39f,0.5f);
    glVertex2f(0.5f,0.5f);
    glVertex2f(0.37,0.5f);
    glVertex2f(0.39f,0.5f);
    glEnd();

    //left side

    glColor3ub(70,41,32);
    glBegin(GL_POLYGON);
    glVertex2f(0.37f,0.21f);
    glVertex2f(0.39f,0.21f);
    glVertex2f(0.39f,0.58f);
    glVertex2f(0.37f,0.56f);
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
