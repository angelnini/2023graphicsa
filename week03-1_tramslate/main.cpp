#include <GL/glut.h>
float X=0, Y=0;///�Q�� global �ܼ�,�b�禡�����ǭ� (�j�g��)
void display()
{
    glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);///�M�I��
    glPushMatrix();///�ƥ��x�}
        glTranslated(X,Y,0);
        glutSolidTeapot(0.3);
    glPopMatrix();///�٭�x�}

    glutSwapBuffers();
}
#include <stdio.h>
void mouse(int button,int state,int x,int y)///�p�gxy
{           ///button���k�䵥  state���U�h�O0�A��}�O1
    X=(x-150)/150.0;///printf("%d %d %d\n",button,state,x,y);
    Y=-(y-150)/150.0; ///�f�Z:��@�b�A���@�b�Ay�[�t��
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week03");

    glutDisplayFunc(display);
    glutMouseFunc(mouse);///�I�smouse�禡

    glutMainLoop();
}
