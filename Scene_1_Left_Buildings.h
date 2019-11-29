void drawfirstbuilding()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glPushMatrix();
        //glColor3ub(204,102,0);
        glColor3ub(127, 87, 56);
        glBegin(GL_POLYGON);
            glVertex2f(-0.95f,-0.41f);
            glVertex2f(-0.65f, -0.41f);
            glVertex2f(-0.65f, 0.78f);
            glVertex2f(-0.95f, 0.78f);
        glEnd();
        //bottom1
        glBegin(GL_POLYGON);
            glColor3ub(102,62,27);
            glVertex2f(-0.64f,0.78f);
            glVertex2f(-0.64f, 0.8f);
            glVertex2f(-0.96f,0.8f);
            glVertex2f(-0.96f, 0.78f);
        glEnd();
        //bottom2
        glBegin(GL_POLYGON);
            glColor3ub(122, 63, 10);
            glVertex2f(-0.67f,0.8f);
            glVertex2f(-0.67f, 0.85f);
            glVertex2f(-0.93f,0.85f);
            glVertex2f(-0.93f, 0.8f);
        glEnd();
        glBegin(GL_POLYGON);
            glColor3ub(201,122,50);
            glVertex2f(-0.72f,0.85f);
            glVertex2f(-0.72f, 0.9f);
            glVertex2f(-0.88f,0.9f);
            glVertex2f(-0.88f, 0.85f);
        glEnd();
        //building topmost
        glBegin(GL_POLYGON);
            glColor3ub(232,158,91);
            glVertex2f(-0.74f,0.9f);
            glVertex2f(-0.74f, 0.92f);
            glVertex2f(-0.86f,0.92f);
            glVertex2f(-0.86f, 0.9f);
        glEnd();

        // Right Windows
        float gap = 0;
        for(int i=0; i<5; i++)
        {
            glBegin(GL_QUADS);
                glColor3ub(230,168,62);

                glColor3ub(230,168,62);
                glVertex2f(-0.68f, 0.6f - gap);
                glVertex2f(-0.74f,0.6f - gap);
                glColor3ub(77,195,255);
                glVertex2f(-0.74f, 0.65f - gap);
                glVertex2f(-0.68f,0.65f - gap);
            glEnd();

            gap += 0.12f;
        }

        // Middle Windows
        gap = 0;
        for(int i=0; i<5; i++)
        {
            glBegin(GL_QUADS);
                glColor3ub(230,168,62);

                glColor3ub(230,168,62);
                glVertex2f(-0.83f, 0.6f - gap);
                glVertex2f(-0.77f,0.6f - gap);
                glColor3ub(77,195,255);
                glVertex2f(-0.77f, 0.65f - gap);
                glVertex2f(-0.83f,0.65f - gap);
            glEnd();

            gap += 0.12f;
        }

        // Left Windows
        gap = 0;
        for(int i=0; i<5; i++)
        {
            glBegin(GL_QUADS);
                glColor3ub(230,168,62);

                glColor3ub(230,168,62);
                glVertex2f(-0.91f, 0.6f - gap);
                glVertex2f(-0.86f,0.6f - gap);
                glColor3ub(77,195,255);
                glVertex2f(-0.86f, 0.65f - gap);
                glVertex2f(-0.91f,0.65f - gap);
            glEnd();

            gap += 0.12f;
        }

        //gate
        glBegin(GL_POLYGON);
            glColor3ub(230,168,62);
            glVertex2f(-0.76f,-0.41f);
            glVertex2f(-0.76f, -0.1f);
            glColor3ub(77,195,255);
            glVertex2f(-0.85f,-0.1f);
            glVertex2f(-0.85f, -0.41f);
        glEnd();
    glPopMatrix();
}

void drawSecondBuilding()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glPushMatrix();
        glColor3ub(25,61,79);
        glBegin(GL_QUADS);
            glVertex2f(-0.42f,-0.41f);
            glVertex2f(-0.42f,0.61f);
            glVertex2f(-0.64f,0.61f);
            glVertex2f(-0.64f,-0.41f);
        glEnd();
        //window1
        glBegin(GL_POLYGON);
            glColor3ub(230,168,62);
            glVertex2f(-0.45f,0.48f);
            glVertex2f(-0.45f, 0.54f);
            glColor3ub(77,195,255);
            glVertex2f(-0.61f,0.54f);
            glVertex2f(-0.61f, 0.48f);
        glEnd();

        glBegin(GL_POLYGON);
            glColor3ub(230,168,62);
            glVertex2f(-0.45f,0.36f);
            glVertex2f(-0.45f, 0.42f);
            glColor3ub(77,195,255);
            glVertex2f(-0.61f,0.42f);
            glVertex2f(-0.61f, 0.36f);
        glEnd();

        glBegin(GL_POLYGON);
            glColor3ub(230,168,62);
            glVertex2f(-0.45f,0.24f);
            glVertex2f(-0.45f, 0.3f);
            glColor3ub(77,195,255);
            glVertex2f(-0.61f,0.3f);
            glVertex2f(-0.61f, 0.24f);
        glEnd();

        glBegin(GL_POLYGON);
            glColor3ub(230,168,62);
            glVertex2f(-0.45f,0.12f);
            glVertex2f(-0.45f, 0.18f);
            glColor3ub(77,195,255);
            glVertex2f(-0.61f,0.18f);
            glVertex2f(-0.61f, 0.12f);
        glEnd();

        glBegin(GL_POLYGON);
            glColor3ub(230,168,62);
            glVertex2f(-0.45f,0.01f);
            glVertex2f(-0.45f, 0.07f);
            glColor3ub(77,195,255);
            glVertex2f(-0.61f,0.07f);
            glVertex2f(-0.61f, 0.01f);
        glEnd();

        //gate2
        glBegin(GL_POLYGON);
            glColor3ub(230,168,62);
            glVertex2f(-0.5f,-0.41f);
            glVertex2f(-0.5f, -0.1f);
            glColor3ub(77,195,255);
            glVertex2f(-0.58f,-0.1f);
            glVertex2f(-0.58f, -0.41f);
        glEnd();
    glPopMatrix();
}

void drawThirdBuilding()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glPushMatrix();
        glColor3ub(61,110,209);
        glBegin(GL_QUADS);
            glVertex2f(-0.42f,-0.41f);
            glVertex2f(-0.22f,-0.41f);
            glVertex2f(-0.22f,0.76);
            glVertex2f(-0.42,0.76);
        glEnd();

        glColor3ub(35,63,120);
        glBegin(GL_QUADS);
            glVertex2f(-0.22f,-0.41f);
            glVertex2f(-0.17f,-0.41f);
            glVertex2f(-0.17f,0.73);
            glVertex2f(-0.22,0.76);
        glEnd();

        // Windows
        float gap =0.0f, gap1= 0.01f;
        for(int i=0;i<4;i++){
            //rwindow
            glBegin(GL_POLYGON);
                glColor3ub(230,168,62);
                glVertex2f(-0.25f,0.6f-gap);
                glVertex2f(-0.25f, 0.65f-gap);
                glColor3ub(77,195,255);
                glVertex2f(-0.3f,0.65f-gap);
                glVertex2f(-0.3f, 0.6f-gap);
            glEnd();

            //leftwindow
            glBegin(GL_POLYGON);
                glColor3ub(230,168,62);
                glVertex2f(-0.34f-gap1,0.6f-gap);
                glVertex2f(-0.34f-gap1, 0.65f-gap);
                glColor3ub(77,195,255);
                glVertex2f(-0.39f-gap1,0.65f-gap);
                glVertex2f(-0.39f-gap1, 0.6f-gap);
            glEnd();
            gap= gap+0.17;
        }

        //door
        glBegin(GL_POLYGON);
            glColor3ub(230,168,62);
            glVertex2f(-0.28f,-0.41f);
            glVertex2f(-0.28f, -0.1f);
            glColor3ub(77,195,255);
            glVertex2f(-0.38f,-0.1f);
            glVertex2f(-0.38f, -0.41f);
        glEnd();
    glPopMatrix();

}
