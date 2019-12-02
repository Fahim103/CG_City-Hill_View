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

void drawFirstBus(float busPosition)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glPushMatrix();
    glTranslatef(busPosition,0.0f, 0.0f);
        //above part
        glBegin(GL_POLYGON);
        glColor3ub(99,138,234);
            glVertex2f(-0.71f,0.17f);
            glVertex2f(-0.45f,0.17f);
            glVertex2f(-0.45f,0.05f);
            glVertex2f(-0.71f,0.05f);
        glEnd();

        //bottom part
        glBegin(GL_POLYGON);
        glColor3ub(88,63,234);
            glVertex2f(-0.71f,0.05f);
            glVertex2f(-0.45f,0.05f);
            glVertex2f(-0.45f,0.00f);
            glVertex2f(-0.71f,0.00f);
        glEnd();

        //window-01
        glBegin(GL_POLYGON);
        glColor3ub(74,196,229);
            glVertex2f(-0.69f,0.15f);
            glVertex2f(-0.65f,0.15f);
            glVertex2f(-0.65f,0.07f);
            glVertex2f(-0.69f,0.07f);
        glEnd();

        //window-02
        glBegin(GL_POLYGON);
        glColor3ub(74,196,229);
            glVertex2f(-0.63f,0.15f);
            glVertex2f(-0.59f,0.15f);
            glVertex2f(-0.59f,0.07f);
            glVertex2f(-0.63f,0.07f);
        glEnd();

        //window-03
        glBegin(GL_POLYGON);
        glColor3ub(74,196,229);
            glVertex2f(-0.57f,0.15f);
            glVertex2f(-0.53f,0.15f);
            glVertex2f(-0.53f,0.07f);
            glVertex2f(-0.57f,0.07f);
        glEnd();

        //window-04
        glBegin(GL_POLYGON);
        glColor3ub(74,196,229);
            glVertex2f(-0.51f,0.15f);
            glVertex2f(-0.47f,0.15f);
            glVertex2f(-0.47f,0.07f);
            glVertex2f(-0.51f,0.07f);
        glEnd();

        //CHAKA_01
        glBegin(GL_POLYGON);
        glColor3ub(40,37,37);
        float theta;
        int i;
        for(i=0;i<360;i++){
            theta= i*3.142/180;
            glVertex2f(-0.50+0.02*sin(theta),0.00+0.02*cos(theta));
        }
        glEnd();

        //CHAKA_02
        glBegin(GL_POLYGON);
        glColor3ub(40,37,37);
        for(i=0;i<360;i++){
            theta= i*3.142/180;
            glVertex2f(-0.66+0.02*sin(theta),0.00+0.02*cos(theta));
        }
        glEnd();
    glPopMatrix();
}

void drawFirstPickup(float pickupPosition)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glPushMatrix();
    glTranslatef(pickupPosition,0.0f, 0.0f);
        //above part
        glBegin(GL_POLYGON);
        glColor3ub(175,65,65);
            glVertex2f(-0.71f,-0.25f);
            glVertex2f(-0.69f,-0.14f);
            glVertex2f(-0.59f,-0.14f);
            glVertex2f(-0.59f,-0.25f);
        glEnd();

        //bottom part
        glBegin(GL_POLYGON);
        glColor3ub(239,60,60);
            glVertex2f(-0.71f,-0.25f);
            glVertex2f(-0.45f,-0.25f);
            glVertex2f(-0.45f,-0.30f);
            glVertex2f(-0.71f,-0.30f);
        glEnd();

        //window-01
        glBegin(GL_POLYGON);
        glColor3ub(74,196,229);
            glVertex2f(-0.69f,-0.23f);
            glVertex2f(-0.68f,-0.15f);
            glVertex2f(-0.60f,-0.15f);
            glVertex2f(-0.60f,-0.23f);
        glEnd();

        //CHAKA_01
        glBegin(GL_POLYGON);
        glColor3ub(40,37,37);
        float theta;
        int i;
        for(i=0;i<360;i++){
            theta= i*3.142/180;
            glVertex2f(-0.50+0.02*sin(theta),-0.30+0.02*cos(theta));
        }
        glEnd();

        //CHAKA_02
        glBegin(GL_POLYGON);
        glColor3ub(40,37,37);
        for(i=0;i<360;i++){
            theta= i*3.142/180;
            glVertex2f(-0.66+0.02*sin(theta),-0.30+0.02*cos(theta));
        }
        glEnd();

    glPopMatrix();
}

void drawSecondPickup(float pickupPosition)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glPushMatrix();
    glTranslatef(pickupPosition,0.0f, 0.0f);
        //above part
        glBegin(GL_POLYGON);
        glColor3ub(6,91,42);
            glVertex2f(-0.45f,0.05f);
            glVertex2f(-0.47f,0.16f);
            glVertex2f(-0.57f,0.16f);
            glVertex2f(-0.57f,0.05f);
        glEnd();

        //bottom part
        glBegin(GL_POLYGON);
        glColor3ub(17,56,86);
            glVertex2f(-0.71f,0.05f);
            glVertex2f(-0.45f,0.05f);
            glVertex2f(-0.45f,0.0f);
            glVertex2f(-0.71f,0.0f);
        glEnd();

        //window-01
        glBegin(GL_POLYGON);
        glColor3ub(74,196,229);
            glVertex2f(-0.47f,0.06f);
            glVertex2f(-0.48f,0.15f);
            glVertex2f(-0.56f,0.15f);
            glVertex2f(-0.56f,0.06f);
        glEnd();

        //CHAKA_01
        glBegin(GL_POLYGON);
        glColor3ub(40,37,37);
        float theta;
        int i;
        for(i=0;i<360;i++){
            theta= i*3.142/180;
            glVertex2f(-0.50+0.02*sin(theta),-0.0+0.02*cos(theta));
        }
        glEnd();

        //CHAKA_02
        glBegin(GL_POLYGON);
        glColor3ub(40,37,37);
        for(i=0;i<360;i++){
            theta= i*3.142/180;
            glVertex2f(-0.66+0.02*sin(theta),-0.0+0.02*cos(theta));
        }
        glEnd();

    glPopMatrix();
}

void drawSecondBus(float busPosition)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glPushMatrix();
    glTranslatef(busPosition,0.0f, 0.0f);
        //above part
        glBegin(GL_POLYGON);
        glColor3ub(12,163,155);
            glVertex2f(-0.71f,-0.25f);
            glVertex2f(-0.45f,-0.25f);
            glVertex2f(-0.45f,-0.13f);
            glVertex2f(-0.71f,-0.13f);
        glEnd();

        //bottom part
        glBegin(GL_POLYGON);
        glColor3ub(36,119,117);
            glVertex2f(-0.71f,-0.25f);
            glVertex2f(-0.45f,-0.25f);
            glVertex2f(-0.45f,-0.30f);
            glVertex2f(-0.71f,-0.30f);
        glEnd();

        //window-01
        glBegin(GL_POLYGON);
        glColor3ub(74,196,229);
            glVertex2f(-0.69f,-0.23f);
            glVertex2f(-0.65f,-0.23f);
            glVertex2f(-0.65f,-0.15f);
            glVertex2f(-0.69f,-0.15f);
        glEnd();

        //window-02
        glBegin(GL_POLYGON);
        glColor3ub(74,196,229);
            glVertex2f(-0.63f,-0.15f);
            glVertex2f(-0.59f,-0.15f);
            glVertex2f(-0.59f,-0.23f);
            glVertex2f(-0.63f,-0.23f);
        glEnd();

        //window-03
        glBegin(GL_POLYGON);
        glColor3ub(74,196,229);
            glVertex2f(-0.57f,-0.15f);
            glVertex2f(-0.53f,-0.15f);
            glVertex2f(-0.53f,-0.23f);
            glVertex2f(-0.57f,-0.23f);
        glEnd();

        //window-04
        glBegin(GL_POLYGON);
        glColor3ub(74,196,229);
            glVertex2f(-0.51f,-0.15f);
            glVertex2f(-0.47f,-0.15f);
            glVertex2f(-0.47f,-0.23f);
            glVertex2f(-0.51f,-0.23f);
        glEnd();

        //CHAKA_01
        glBegin(GL_POLYGON);
        glColor3ub(40,37,37);
        float theta;
        int i;
        for(i=0;i<360;i++){
            theta= i*3.142/180;
            glVertex2f(-0.50+0.02*sin(theta),-0.30+0.02*cos(theta));
        }
        glEnd();

        //CHAKA_02
        glBegin(GL_POLYGON);
        glColor3ub(40,37,37);
        for(i=0;i<360;i++){
            theta= i*3.142/180;
            glVertex2f(-0.66+0.02*sin(theta),-0.30+0.02*cos(theta));
        }
        glEnd();

    glPopMatrix();
}
