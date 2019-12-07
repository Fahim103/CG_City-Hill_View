void drawBoothName(float x, float y, char *string)
{
    glRasterPos2f(x, y);

    for (char* c=string; *c != '\0'; c++)
    {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10, *c); // Updates the position
    }
}

void drawRestaurant()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glPushMatrix();
    //front side
    glColor3ub(211,94,42);
    glBegin(GL_POLYGON);
    glVertex2f(0.5f,0.23f);
    glVertex2f(0.95f,0.23f);
    glVertex2f(0.95f,0.62f);
    glVertex2f(0.5f,0.62f);
    glEnd();

    //left side
    glColor3ub(107,99,90);
    glBegin(GL_POLYGON);
    glVertex2f(0.45f,0.23f);
    glVertex2f(0.5f,0.23f);
    glVertex2f(0.5f,0.70f);
    glVertex2f(0.45f,0.65f);
    glEnd();

    //Name
    glColor3ub(153,145,138);
    glBegin(GL_QUADS);
    glVertex2f(0.5f,0.62f);
    glVertex2f(0.95f,0.62f);
    glVertex2f(0.95f,0.70f);
    glVertex2f(0.5f,0.70f);
    glEnd();

    glColor3ub(0,0,0);
    drawString(0.65f,0.64f,"Espresso Cafe");//Manhattan Mocha

    //mirror
    glColor3ub(230,168,62);
    glBegin(GL_QUADS);
    glVertex2f(0.52f,0.25f);
    glVertex2f(0.92f,0.25f);
    glColor3ub(77,195,255);
    glVertex2f(0.92f,0.58f);
    glVertex2f(0.52f,0.58f);
    glEnd();

    glColor3ub(124,60,8);
    glBegin(GL_QUADS);
    glVertex2d(0.52f,0.25f);
    glVertex2f(0.67f,0.25f);
    glVertex2f(0.67f,0.4f);
    glVertex2f(0.52f,0.4f);
    glEnd();
    //door

    glLineWidth(3);
    glBegin(GL_LINE_LOOP);
    glVertex2f(0.67f,0.255f);
    glVertex2f(0.77f,0.255f);
    glVertex2f(0.77f,0.58f);
    glVertex2f(0.67f,0.58f);
    glEnd();

    glColor3ub(124,60,8);
    glBegin(GL_QUADS);
    glVertex2f(0.77f,0.25f);
    glVertex2f(0.92f,0.25f);
    glVertex2f(0.92f,0.4f);
    glVertex2f(0.77f,0.4f);
    glEnd();


    glLineWidth(2);
    glBegin(GL_LINES);

    glVertex2f(0.523f,0.4f);
    glVertex2f(0.523f,0.58f);

    glVertex2f(0.59f,0.4f);
    glVertex2f(0.59f,0.58f);

    glVertex2f(0.84f,0.4f);
    glVertex2f(0.84f,0.58f);

    glVertex2f(0.917f,0.4f);
    glVertex2f(0.917f,0.58f);

    glVertex2f(0.523f,0.58f);
    glVertex2f(0.917f,0.58f);

    glColor3ub(255,255,255);
    glVertex2f(0.52f,0.37f);
    glVertex2f(0.67f,0.37f);

    glVertex2f(0.77f,0.37f);
    glVertex2f(0.92f,0.37f);

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

    glLineWidth(1);
    glBegin(GL_LINES);
    glColor3ub(0,0,0);
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
    drawBoothName(0.397f,0.53f,"TELEPHONE");

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
    glColor3ub(222,184,100);//222,184,100
    glBegin(GL_QUADS);
    glVertex2f(-0.95f,0.23f);
    glVertex2f(-0.35f,0.23f);
    glVertex2f(-0.35f,0.73f);
    glVertex2f(-0.95f,0.73f);
    glEnd();
    glColor3ub(0,0,0);
    drawString(-0.65,0.65f,"Hotel Du Palais");
    //top side
    glColor3ub(222,184,100);
    glBegin(GL_QUADS);
    glVertex2f(-0.95f,0.73f);
    glVertex2f(-0.7f,0.73f);
    glVertex2f(-0.7f,0.85f);
    glVertex2f(-0.95f,0.85f);
    glEnd();

    //roof
    glColor3ub(219,104,39);
    glBegin(GL_TRIANGLES);
    glVertex2f(-0.95f,0.85f);
    glVertex2f(-0.7f,0.85f);
    glVertex2f(-0.825f,0.95f);
    glEnd();
    glPointSize(4);
    glBegin(GL_POINTS);
    glVertex2f(-0.825f,0.95f);
    glVertex2f(-0.94f,0.86f);
    glVertex2f(-0.90f,0.895f);
    glVertex2f(-0.87f,0.917f);
    glVertex2f(-0.78f,0.917f);
    glVertex2f(-0.75f,0.895f);
    glVertex2f(-0.71f,0.86f);
    glEnd();

    //lines
    glColor3ub(124,60,8);
    glLineWidth(4);
    glBegin(GL_LINES);
    glVertex2f(-0.7f,0.725f);
    glVertex2f(-0.35f,0.725f);

    glVertex2f(-0.95f,0.57f);
    glVertex2f(-0.35f,0.57f);
    glEnd();

    //door

    glColor3ub(230,168,62);
    glBegin(GL_QUADS);
    glVertex2f(-0.5f,0.235f);
    glVertex2f(-0.36f,0.235f);
    glColor3ub(77,195,255);
    glVertex2f(-0.36f,0.55f);
    glVertex2f(-0.5f,0.55f);
    glEnd();

    glColor3ub(124,60,8);
    glLineWidth(3);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.5f,0.235f);
    glVertex2f(-0.36f,0.235f);
    glVertex2f(-0.36f,0.55f);
    glVertex2f(-0.5f,0.55f);
    glEnd();

    //down windows
    glBegin(GL_QUADS);
    glColor3ub(230,168,62);
    glVertex2f(-0.93f,0.28f);
    glVertex2f(-0.54f,0.28f);
    glColor3ub(77,195,255);
    glVertex2f(-0.54f,0.48f);
    glVertex2f(-0.93f,0.48f);
    glEnd();

    glLineWidth(2);
    glColor3ub(124,60,8);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-0.93f,0.28f);
    glVertex2f(-0.54f,0.28f);
    glVertex2f(-0.54f,0.48f);
    glVertex2f(-0.93f,0.48f);
    glEnd();

    // top windows
    glColor3ub(230,168,62);
    glBegin(GL_QUADS);
    glVertex2f(-0.88f,0.61f);
    glVertex2f(-0.78f,0.61f);
    glColor3ub(77,195,255);
    glVertex2f(-0.78f,0.83f);
    glVertex2f(-0.88f,0.83f);
    glEnd();
    glBegin(GL_LINE_LOOP);
    glColor3ub(124,60,8);
    glVertex2f(-0.88f,0.61f);
    glVertex2f(-0.78f,0.61f);
    glVertex2f(-0.78f,0.83f);
    glVertex2f(-0.88f,0.83f);
    glEnd();
    glColor3ub(124,60,8);
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2f(-0.88f,0.66f);
    glVertex2f(-0.78f,0.66f);

    glVertex2f(-0.88f,0.72f);
    glVertex2f(-0.78f,0.72f);

    glVertex2f(-0.88f,0.78f);
    glVertex2f(-0.78f,0.78f);

    glVertex2f(-0.805,0.83f);
    glVertex2f(-0.805,0.61f);

    glVertex2f(-0.85,0.83f);
    glVertex2f(-0.85f,0.61f);
    glEnd();

    //left side
    glColor3ub(170,121,23);
    glBegin(GL_QUADS);
    glVertex2f(-0.35f,0.23f);
    glVertex2f(-0.35f,0.73f);
    glVertex2f(-0.3f,0.68f);
    glVertex2f(-0.3f,0.23f);
    glEnd();

    glPopMatrix();

}
