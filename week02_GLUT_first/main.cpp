#include <GL/glut.h>
void display()
{
    glColor3f(0,1,0);///綠色
    ///glutSolidTeapot( 0.5 );///畫出實心大茶壺，大小0.5
    glBegin(GL_POLYGON);///開始畫多邊形
        glColor3f(1,0,0); glVertex2f(0,1);///紅色頂點
        glColor3f(0,1,0); glVertex2f(-1,-1);///綠色頂點
        glColor3f(0,0,1); glVertex2f(1,-1);///藍色頂點
    glEnd();///畫完了

    glColor3f(1,1,0);///黃色
    glutSolidTeapot(0.3);///畫出實心小茶壺，大小0.3
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














