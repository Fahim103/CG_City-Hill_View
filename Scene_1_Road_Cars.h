void drawRoadCityView()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glPushMatrix();
        glColor3f(0.4f, 0.4f, 0.4f);
        glBegin(GL_QUADS);
            glVertex2f(-1.0f, -1.0f);
            glVertex2f(1.0f, -1.0f);
            glVertex2f(1.0f, -0.4f);
            glVertex2f(-1.0f, -0.4f);
        glEnd();

        //footpath
        glBegin(GL_POLYGON);
        glColor3ub(88,89,91);
            glVertex2f(-1,-0.4f);
            glVertex2f(1,-0.4f);
            glVertex2f(1,-0.46f);
            glVertex2f(-1,-0.46f);
        glEnd();

        //footpath_side
        glBegin(GL_POLYGON);
        glColor3ub(109,110,113);
            glVertex2f(-1,-0.46f);
            glVertex2f(1,-0.46f);
            glVertex2f(1,-0.52f);
            glVertex2f(-1,-0.52f);
        glEnd();

        //footpath_texture;
        float diffrence = 0.0;
        for(int i=0; i<100; i++){
            glBegin(GL_LINES);
            glColor3ub(188,190,192);
                glVertex2f(-1 + diffrence,-0.46f);
                diffrence += 0.02;
                glVertex2f(-1 + diffrence,-0.52f);
            glEnd();
        }
        //zebra_crossing
        glBegin(GL_POLYGON);
        glColor3ub(209,211,212);
            glVertex2f(0.2f,-0.55f);
            glVertex2f(0.4f,-0.55f);
            glVertex2f(0.4f,-0.60f);
            glVertex2f(0.2f,-0.60f);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(209,211,212);
            glVertex2f(0.2f,-0.65f);
            glVertex2f(0.4f,-0.65f);
            glVertex2f(0.4f,-0.70f);
            glVertex2f(0.2f,-0.70f);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(209,211,212);
            glVertex2f(0.2f,-0.75f);
            glVertex2f(0.4f,-0.75f);
            glVertex2f(0.4f,-0.80f);
            glVertex2f(0.2f,-0.80f);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(209,211,212);
            glVertex2f(0.2f,-0.85f);
            glVertex2f(0.4f,-0.85f);
            glVertex2f(0.4f,-0.90f);
            glVertex2f(0.2f,-0.90f);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(209,211,212);
            glVertex2f(0.2f,-0.95f);
            glVertex2f(0.4f,-0.95f);
            glVertex2f(0.4f,-1);
            glVertex2f(0.2f,-1);
        glEnd();

        //MID_LINE
        glBegin(GL_POLYGON);
        glColor3ub(209,211,212);
            glVertex2f(0.5f,-0.75f);
            glVertex2f(0.65f,-0.75f);
            glVertex2f(0.65f,-0.80f);
            glVertex2f(0.5f,-0.80f);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(209,211,212);
            glVertex2f(0.8f,-0.75f);
            glVertex2f(0.95f,-0.75f);
            glVertex2f(0.95f,-0.80f);
            glVertex2f(0.8f,-0.80f);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(209,211,212);
            glVertex2f(-0.1f,-0.75f);
            glVertex2f(-0.25f,-0.75f);
            glVertex2f(-0.25f,-0.80f);
            glVertex2f(-0.1f,-0.80f);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(209,211,212);
            glVertex2f(-0.4f,-0.75f);
            glVertex2f(-0.55f,-0.75f);
            glVertex2f(-0.55f,-0.80f);
            glVertex2f(-0.4f,-0.80f);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(209,211,212);
            glVertex2f(-0.7f,-0.75f);
            glVertex2f(-0.85f,-0.75f);
            glVertex2f(-0.85f,-0.80f);
            glVertex2f(-0.7f,-0.80f);
        glEnd();
    glPopMatrix();
}

void drawFirstCarCityView(float firstCarPosition)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glPushMatrix();
    glTranslatef(firstCarPosition,0.0f, 0.0f);
        //above part
        glBegin(GL_POLYGON);
        glColor3ub(175,65,65);
            glVertex2f(-0.63f,-0.49f);
            glVertex2f(-0.45f,-0.49f);
            glVertex2f(-0.43f,-0.58f);
            glVertex2f(-0.65f,-0.58f);
        glEnd();

        //right window
        glBegin(GL_POLYGON);
        glColor3ub(74,196,229);
            glVertex2f(-0.53f,-0.50f);
            glVertex2f(-0.46f,-0.50f);
            glVertex2f(-0.45f,-0.57f);
            glVertex2f(-0.53f,-0.57f);
        glEnd();

        //left window
        glBegin(GL_POLYGON);
        glColor3ub(74,196,229);
            glVertex2f(-0.55f,-0.50f);
            glVertex2f(-0.62f,-0.50f);
            glVertex2f(-0.63f,-0.57f);
            glVertex2f(-0.55f,-0.57f);
        glEnd();

        //bottom part
        glBegin(GL_POLYGON);
        glColor3ub(239,60,60);
            glVertex2f(-0.70f,-0.58f);
            glVertex2f(-0.38f,-0.58f);
            glVertex2f(-0.38f,-0.65f);
            glVertex2f(-0.70f,-0.65f);
        glEnd();

        //CHAKA_01
        glBegin(GL_POLYGON);
        glColor3ub(40,37,37);
        float theta;
        int i;
        for(i=0;i<360;i++){
            theta= i*3.142/180;
            glVertex2f(-0.63+0.03*sin(theta),-0.65+0.03*cos(theta));
        }
        glEnd();

        //CHAKA_02
        glBegin(GL_POLYGON);
        glColor3ub(40,37,37);
        for(i=0;i<360;i++){
            theta= i*3.142/180;
            glVertex2f(-0.45+0.03*sin(theta),-0.65+0.03*cos(theta));
        }
        glEnd();
    glPopMatrix();
}

void drawSecondCarCityView(float secondCarPosition)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glPushMatrix();
    glTranslatef(secondCarPosition,0.0f, 0.0f);
        //above part
        glBegin(GL_POLYGON);
        glColor3ub(12,163,155);
            glVertex2f(-0.63f,-0.77f);
            glVertex2f(-0.45f,-0.77f);
            glVertex2f(-0.43f,-0.86f);
            glVertex2f(-0.65f,-0.86f);
        glEnd();

        //right window
        glBegin(GL_POLYGON);
        glColor3ub(242,155,83);
            glVertex2f(-0.53f,-0.78f);
            glVertex2f(-0.46f,-0.78f);
            glVertex2f(-0.45f,-0.85f);
            glVertex2f(-0.53f,-0.85f);
        glEnd();

        //left window
        glBegin(GL_POLYGON);
        glColor3ub(242,155,83);
            glVertex2f(-0.55f,-0.78f);
            glVertex2f(-0.62f,-0.78f);
            glVertex2f(-0.63f,-0.85f);
            glVertex2f(-0.55f,-0.85f);
        glEnd();

        //bottom part
        glBegin(GL_POLYGON);
        glColor3ub(36,119,117);
            glVertex2f(-0.70f,-0.86f);
            glVertex2f(-0.38f,-0.86f);
            glVertex2f(-0.38f,-0.93f);
            glVertex2f(-0.70f,-0.93f);
        glEnd();

        //CHAKA_01
        glBegin(GL_POLYGON);
        glColor3ub(40,37,37);
        float theta;
        int i;
        for(i=0;i<360;i++){
            theta= i*3.142/180;
            glVertex2f(-0.63+0.03*sin(theta),-0.93+0.03*cos(theta));
        }
        glEnd();

        //CHAKA_02
        glBegin(GL_POLYGON);
        glColor3ub(40,37,37);
        for(i=0;i<360;i++){
            theta= i*3.142/180;
            glVertex2f(-0.45+0.03*sin(theta),-0.93+0.03*cos(theta));
        }
        glEnd();
    glPopMatrix();
}

void drawThirdCarCityView(float thirdCarPosition)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glPushMatrix();
    glTranslatef(thirdCarPosition,0.0f, 0.0f);
        //above part
        glBegin(GL_POLYGON);
        glColor3ub(2,91,38);

        glVertex2f(-0.63f,-0.49f);
        glVertex2f(-0.45f,-0.49f);
        glVertex2f(-0.43f,-0.58f);
        glVertex2f(-0.65f,-0.58f);

            glEnd();
        //right window
        glBegin(GL_POLYGON);
        glColor3ub(244,233,140);

        glVertex2f(-0.53f,-0.50f);
        glVertex2f(-0.46f,-0.50f);
        glVertex2f(-0.45f,-0.57f);
        glVertex2f(-0.53f,-0.57f);

            glEnd();

        //left window
        glBegin(GL_POLYGON);
        glColor3ub(244,233,140);

        glVertex2f(-0.55f,-0.50f);
        glVertex2f(-0.62f,-0.50f);
        glVertex2f(-0.63f,-0.57f);
        glVertex2f(-0.55f,-0.57f);

            glEnd();


        //bottom part
        glBegin(GL_POLYGON);
        glColor3ub(8,169,181);

        glVertex2f(-0.70f,-0.58f);
        glVertex2f(-0.38f,-0.58f);
        glVertex2f(-0.38f,-0.65f);
        glVertex2f(-0.70f,-0.65f);

            glEnd();


        //CHAKA_01
        glBegin(GL_POLYGON);
        glColor3ub(40,37,37);

        float theta;
        int i;
        for(i=0;i<360;i++)
            {
            theta= i*3.142/180;
            glVertex2f(-0.63+0.03*sin(theta),-0.65+0.03*cos(theta));

            }
        glEnd();

          //CHAKA_02
        glBegin(GL_POLYGON);
        glColor3ub(40,37,37);

        for(i=0;i<360;i++)
            {
            theta= i*3.142/180;
            glVertex2f(-0.45+0.03*sin(theta),-0.65+0.03*cos(theta));

            }
        glEnd();




    glPopMatrix();
}


void drawFourthCarCityView(float fourthCarPosition)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glPushMatrix();
    glTranslatef(fourthCarPosition,0.0f, 0.0f);
        //above part
        glBegin(GL_POLYGON);
        glColor3ub(99,138,234);

        glVertex2f(-0.63f,-0.77f);
        glVertex2f(-0.45f,-0.77f);
        glVertex2f(-0.43f,-0.86f);
        glVertex2f(-0.65f,-0.86f);

            glEnd();
        //right window
        glBegin(GL_POLYGON);
        glColor3ub(74,194,239);

        glVertex2f(-0.53f,-0.78f);
        glVertex2f(-0.46f,-0.78f);
        glVertex2f(-0.45f,-0.85f);
        glVertex2f(-0.53f,-0.85f);

            glEnd();

        //left window
        glBegin(GL_POLYGON);
        glColor3ub(74,194,239);

        glVertex2f(-0.55f,-0.78f);
        glVertex2f(-0.62f,-0.78f);
        glVertex2f(-0.63f,-0.85f);
        glVertex2f(-0.55f,-0.85f);

            glEnd();


        //bottom part
        glBegin(GL_POLYGON);
        glColor3ub(88,63,234);

        glVertex2f(-0.70f,-0.86f);
        glVertex2f(-0.38f,-0.86f);
        glVertex2f(-0.38f,-0.93f);
        glVertex2f(-0.70f,-0.93f);

            glEnd();


        //CHAKA_01
        glBegin(GL_POLYGON);
        glColor3ub(40,37,37);

        float theta;
        int i;
        for(i=0;i<360;i++)
            {
            theta= i*3.142/180;
            glVertex2f(-0.63+0.03*sin(theta),-0.93+0.03*cos(theta));

            }
        glEnd();

          //CHAKA_02
        glBegin(GL_POLYGON);
        glColor3ub(40,37,37);

        for(i=0;i<360;i++)
            {
            theta= i*3.142/180;
            glVertex2f(-0.45+0.03*sin(theta),-0.93+0.03*cos(theta));

            }
        glEnd();




    glPopMatrix();
}

void streetLightDayCityView()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glPushMatrix();
        //First_street_light
        glBegin(GL_POLYGON);
        glColor3ub(150,148,146);
            glVertex2f(-0.70f,-0.46f);
            glVertex2f(-0.68f,-0.46f);
            glVertex2f(-0.68f,0.10f);
            glVertex2f(-0.70f,0.10f);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(47,48,47);
            glVertex2f(-0.68f,0.10f);
            glVertex2f(-0.70f,0.10f);
            glVertex2f(-0.65f,0.22f);
            glVertex2f(-0.62f,0.22f);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(242,195,48);
            glVertex2f(-0.65f,0.22f);
            glVertex2f(-0.62f,0.22f);
            glVertex2f(-0.62f,0.25f);
            glVertex2f(-0.65f,0.25f);
        glEnd();

        //Second_street_light
        glBegin(GL_POLYGON);
        glColor3ub(150,148,146);
            glVertex2f(0.70f,-0.46f);
            glVertex2f(0.68f,-0.46f);
            glVertex2f(0.68f,0.10f);
            glVertex2f(0.70f,0.10f);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(47,48,47);
            glVertex2f(0.68f,0.10f);
            glVertex2f(0.70f,0.10f);
            glVertex2f(0.74f,0.22f);
            glVertex2f(0.71f,0.22f);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(242,195,48);
            glVertex2f(0.74f,0.22f);
            glVertex2f(0.71f,0.22f);
            glVertex2f(0.71f,0.25f);
            glVertex2f(0.74f,0.25f);
        glEnd();

    glPopMatrix();
}

void streetLightNightCityView()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glPushMatrix();

        //First_street_light
        glBegin(GL_POLYGON);
        glColor3ub(150,148,146);

        glVertex2f(-0.70f,-0.46f);
        glVertex2f(-0.68f,-0.46f);
        glVertex2f(-0.68f,0.10f);
        glVertex2f(-0.70f,0.10f);

            glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(47,48,47);

        glVertex2f(-0.68f,0.10f);
        glVertex2f(-0.70f,0.10f);
        glVertex2f(-0.65f,0.22f);
        glVertex2f(-0.62f,0.22f);

            glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(242,195,48);

        glVertex2f(-0.65f,0.22f);
        glVertex2f(-0.62f,0.22f);
        glVertex2f(-0.62f,0.25f);
        glVertex2f(-0.65f,0.25f);

            glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(242,15,8);

        glColor3ub(239,217,20);
        glVertex2f(-0.62f,0.22f);
        glVertex2f(0.71f,0.22f);
        glVertex2f(-0.65f,0.22f);
        glColor3ub(116,117,117);
        glVertex2f(-0.75f,-0.47f);
        glColor3ub(116,117,117);
        glVertex2f(-0.52f,-0.47f);

            glEnd();



        //Second_street_light
        glBegin(GL_POLYGON);
        glColor3ub(150,148,146);

        glVertex2f(0.70f,-0.46f);
        glVertex2f(0.68f,-0.46f);
        glVertex2f(0.68f,0.10f);
        glVertex2f(0.70f,0.10f);

            glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(47,48,47);

        glVertex2f(0.68f,0.10f);
        glVertex2f(0.70f,0.10f);
        glVertex2f(0.74f,0.22f);
        glVertex2f(0.71f,0.22f);

            glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(242,195,48);

        glVertex2f(0.74f,0.22f);
        glVertex2f(0.71f,0.22f);
        glVertex2f(0.71f,0.25f);
        glVertex2f(0.74f,0.25f);

            glEnd();

        glBegin(GL_POLYGON);

        glColor3ub(239,217,20);
        glVertex2f(0.74f,0.22f);
        glColor3ub(242,222,81);
        glVertex2f(0.71f,0.22f);
        glColor3ub(140,139,129);
        glVertex2f(0.61f,-0.47f);
        glColor3ub(116,117,117);
        glVertex2f(0.84f,-0.47f);


            glEnd();




     glPopMatrix();

}
