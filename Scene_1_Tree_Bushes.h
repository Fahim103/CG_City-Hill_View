void drawBushes()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glPushMatrix();
        glColor3ub(10, 91, 6);
        drawCircle(-0.2f, -.4f, .13f);
        drawCircle(0.0f, -.38f, .10f);
        drawCircle(0.2f, -.4f, .13f);
    glPopMatrix();
}

void drawLeftTree()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glPushMatrix();
        // Tree Trunk
        glColor3ub(112, 91, 3);
        glBegin(GL_TRIANGLES);
            glVertex2f(-0.22f, -.35f);
            glVertex2f(-0.18f, -.35f);
            glVertex2f(-0.20f, 0.0f);
        glEnd();

        // Tree Leafs
        glColor3ub(5, 127, 34);

        glBegin(GL_TRIANGLES);
            glVertex2f(-0.26, -0.10);
            glVertex2f(-0.14, -0.10);
            glVertex2f(-0.20, 0.05);
        glEnd();

        glBegin(GL_TRIANGLES);
            glVertex2f(-0.26, -0.02);
            glVertex2f(-0.14, -0.02);
            glVertex2f(-0.20, 0.13);
        glEnd();

        glBegin(GL_TRIANGLES);
            glVertex2f(-0.26, 0.05);
            glVertex2f(-0.14, 0.05);
            glVertex2f(-0.20, 0.20);
        glEnd();
    glPopMatrix();
}

void drawRightTree()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glPushMatrix();
        // Tree Trunk
        glColor3ub(112, 91, 3);
        glBegin(GL_TRIANGLES);
            glVertex2f(0.22, -.35);
            glVertex2f(0.18, -.35);
            glVertex2f(0.20, 0.0);
        glEnd();

        // Tree Leafs
        glColor3ub(5, 127, 34);

        glBegin(GL_TRIANGLES);
            glVertex2f(0.26, -0.10);
            glVertex2f(0.14, -0.10);
            glVertex2f(0.20, 0.05);
        glEnd();

        glBegin(GL_TRIANGLES);
            glVertex2f(0.26, -0.02);
            glVertex2f(0.14, -0.02);
            glVertex2f(0.20, 0.13);
        glEnd();

        glBegin(GL_TRIANGLES);
            glVertex2f(0.26, 0.05);
            glVertex2f(0.14, 0.05);
            glVertex2f(0.20, 0.20);
        glEnd();

    glPopMatrix();
}

void drawMiddleTree()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glPushMatrix();
        // Tree Trunk
        glColor3ub(112, 91, 3);
        glBegin(GL_TRIANGLES);
            glVertex2f(-0.01f, -.35f);
            glVertex2f(0.02f, -.35f);
            glVertex2f(0.0f, -0.1f);
        glEnd();

        // Tree Leafs
        glColor3ub(21, 86, 7);

        glBegin(GL_TRIANGLES);
            glVertex2f(-0.05, -0.15);
            glVertex2f(0.05, -0.15);
            glVertex2f(0.0, 0.0);
        glEnd();

        glBegin(GL_TRIANGLES);
            glVertex2f(-0.05, -0.07);
            glVertex2f(0.05, -0.07);
            glVertex2f(0.0, 0.07);
        glEnd();

        glBegin(GL_TRIANGLES);
            glVertex2f(-0.05, 0.01);
            glVertex2f(0.05, 0.01);
            glVertex2f(0.0, 0.15);
        glEnd();

    glPopMatrix();
}
