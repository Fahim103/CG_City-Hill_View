void drawHospital()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glPushMatrix();

    //front side
    glColor3ub(76,99,35);
    glBegin(GL_QUADS);
    glVertex2f(0.60f,-0.41f);
    glVertex2f(0.98f,-0.41f);
    glVertex2f(0.98f,0.8f);
    glVertex2f(0.60f,0.8f);
    glEnd();

    //Left side
    glColor3ub(6,130,97);
    glBegin(GL_QUADS);
    glVertex2f(0.53f,-0.41f);
    glVertex2f(0.60f,-0.41f);
    glVertex2f(0.60f,0.8f);
    glVertex2f(0.53f,0.69f);
    glEnd();

    //Hospital Name
    glColor3ub(230,123,100);
    glBegin(GL_POLYGON);
    glVertex2f(0.63f,0.65f);
    glVertex2f(0.95f,0.65f);
    glVertex2f(0.95f,0.76f);
    glVertex2f(0.63f,0.76f);
    glEnd();

    glColor3ub(0, 0, 0);
    drawString(0.69f, 0.69f, "General Hospital");

    //big window
    float gap=0.0f;
    for(int i=1;i<6;i++)
    {
        glColor3ub(230,168,62);
        glBegin(GL_QUADS);
        glVertex2f(0.85f,0.53f-gap);
        glVertex2f(0.95f,0.53f-gap);
        glColor3ub(77,195,255-gap);
        glVertex2f(0.95f,0.62f-gap);
        glVertex2f(0.85f,0.62f-gap);
        glEnd();
        gap+=0.17;
    }


    //small windows
    float gap1=0.0f,gap2=0.07;
    for(int i=1;i<6;i++)
    {
        glColor3ub(230,168,62);
        glBegin(GL_QUADS);
        glVertex2f(0.65f,0.53f -gap1);
        glVertex2f(0.71f,0.53f-gap1);
        glColor3ub(77,195,255);
        glVertex2f(0.71f,0.62f-gap1);
        glVertex2f(0.65f,0.62f-gap1);
        glEnd();

        glColor3ub(230,168,62);
        glBegin(GL_QUADS);
        glVertex2f(0.65f+gap2,0.53f-gap1);
        glVertex2f(0.71f+gap2,0.53f-gap1);
        glColor3ub(77,195,255);
        glVertex2f(0.71f+gap2,0.62f-gap1);
        glVertex2f(0.65f+gap2,0.62f-gap1);
        glEnd();

        gap1+=0.17;
    }

    //Door
    glBegin(GL_QUADS);
    glColor3ub(230,168,62);
    glVertex2f(0.73f,-0.41f);
    glVertex2f(0.90f,-0.41f);
    glColor3ub(77,195,255);
    glVertex2f(0.90f,-0.20f);
    glVertex2f(0.73f,-0.20f);
    glEnd();


    glPopMatrix();
}

void drawPharmacy()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glPushMatrix();

    //front side
    glColor3ub(35,76,150);
    glBegin(GL_QUADS);
    glVertex2f(0.36f,-0.41f);
    glVertex2f(0.64f,-0.41f);
    glVertex2f(0.64f,-0.08f);
    glVertex2f(0.36f,-0.08f);
    glEnd();

    //Left Side
    glColor3ub(0,10,50);
    glBegin(GL_QUADS);
    glVertex2f(0.3f,-0.41f);
    glVertex2f(0.36f,-0.41f);
    glVertex2f(0.36f,-0.01f);
    glVertex2f(0.3f,-0.08f);
    glEnd();

    //Name
    glColor3ub(0,10,50);
    glBegin(GL_QUADS);
    glVertex2f(0.36f,-0.08f);
    glVertex2f(0.64f,-0.08f);
    glVertex2f(0.64f,-0.01f);
    glVertex2f(0.36f,-0.01f);
    glEnd();

    glColor3ub(255, 255, 255);
    drawString(0.45f, -0.055f, "Pharmacy");

    //Mirror
    glColor3ub(230,168,62);
    glBegin(GL_QUADS);
    glVertex2f(0.38f,-0.28f);
    glVertex2f(0.62f,-0.28f);
    glColor3ub(77,195,255);
    glVertex2f(0.62f,-0.15f);
    glVertex2f(0.38f,-0.15f);
    glEnd();
    glPopMatrix();

}
