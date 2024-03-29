#include <GL/glut.h>
float angle=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
        glRotated(angle,0,0,1);
        glutSolidTeapot(0.3);
    glPopMatrix();
    glutSwapBuffers();
}
void timer(int t)///timer函式
{
    glutTimerFunc(500,timer,t+1);///設下一個鬧鐘
    angle+=90;///增加90度
    glutPostRedisplay();///重畫畫面
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week14");


    glutDisplayFunc(display);
    glutTimerFunc(2000,timer,0);///設定timer函式

    glutMainLoop();
}
