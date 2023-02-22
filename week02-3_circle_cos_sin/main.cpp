#include <GL/glut.h>
#include <math.h>
void myCircle(float r, float x, float y)
{
    glBegin(GL_POLYGON);
        for(float a=0; a<2*3.1415926; a+=0.01){
            glVertex2f(r*cos(a)+x, r*sin(a)+y);
        }
    glEnd();
}
void display()
{
    glColor3f(1,0,1); myCircle( 0.6, 0, 0);///正中間
    glColor3f(1,0,0); myCircle( 0.3, 0.5, 0.5);///右上
    glColor3f(0,1,0); myCircle( 0.3, -0.5, 0.5);///左上
    glColor3f(1,1,0); myCircle( 0.3, -0.5, -0.5);///左下
    glColor3f(0,0,1); myCircle( 0.3, 0.5, -0.5);///右下

    glutSwapBuffers();///請GLUT把畫面swap送到顯示的地方
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);///把GLUT開起來
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("GLUT Shapes");///開視窗
    glutDisplayFunc(display);///顯示對應函數
    glutMainLoop();///最後用"主要的迴圈"卡在最後面
}














