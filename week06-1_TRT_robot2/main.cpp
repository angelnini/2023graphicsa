#include <GL/glut.h>

float angle =0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);

    glutSolidSphere(0.02,30,30);///正中心圓球

    glPushMatrix();
        glTranslatef(-0.5,0.5,0);///(3)掛上去
        glRotatef(angle,0 ,0 ,1);///(2)轉動
        glTranslatef(0.46,-0.05,0);///(1)確認中心點
        glutSolidTeapot(0.3);
    glPopMatrix();

    glutSwapBuffers();
    angle++;
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week06");

    glutDisplayFunc(display);
    glutIdleFunc(display);
    glutMainLoop();
}
