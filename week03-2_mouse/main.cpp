#include <GL/glut.h>
#include <stdio.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);
    glBegin(GL_POLYGON);
    glVertex2f(-0.516,0.340);
   glVertex2f(-0.516,0.288);
   glVertex2f(-0.512,0.240);
   glVertex2f(-0.512,0.156);
   glVertex2f(-0.508,0.056);
   glVertex2f(-0.516,-0.012);
   glVertex2f(-0.476,-0.044);
   glVertex2f(-0.408,-0.056);
   glVertex2f(-0.264,-0.072);
   glVertex2f(-0.152,-0.060);
   glVertex2f(0.008,-0.052);
   glVertex2f(0.144,0.576);
   glVertex2f(0.148,0.496);
   glVertex2f(0.132,0.340);
   glVertex2f(0.124,0.144);
   glVertex2f(0.124,0.048);
   glVertex2f(0.140,-0.052);
   glVertex2f(0.144,-0.108);
    glEnd();

    glColor3f(244/255.0, 209/255.0, 33/255.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.516,0.352);
   glVertex2f(-0.516,0.424);
   glVertex2f(-0.516,0.496);
   glVertex2f(-0.520,0.568);
   glVertex2f(-0.484,0.664);
   glVertex2f(-0.452,0.616);
   glVertex2f(-0.444,0.540);
   glVertex2f(-0.404,0.500);
   glVertex2f(-0.396,0.472);
   glVertex2f(-0.384,0.444);
   glVertex2f(-0.376,0.416);
   glVertex2f(-0.284,0.996);

    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-0.104,0.504);
   glVertex2f(-0.104,0.560);
   glVertex2f(-0.104,0.636);
   glVertex2f(-0.120,0.748);
   glVertex2f(-0.108,0.876);
   glVertex2f(-0.060,0.968);
   glVertex2f(-0.044,0.900);
   glVertex2f(-0.040,0.828);
   glVertex2f(-0.016,0.768);
   glVertex2f(0.012,0.712);
   glVertex2f(0.044,0.644);
   glVertex2f(0.064,0.588);
   glVertex2f(0.080,0.572);

   glEnd();

    glutSwapBuffers();
}
void mouse(int button,int state,int x,int y)///小寫xy
{           ///button左右鍵等  state按下去是0，放開是1
    float X =(x-250)/250.0;
    float Y =-(y-250)/250.0; ///口訣:減一半，除一半，y加負號
    if(state==GLUT_DOWN){///只有按下mouse才印出程式
        printf("   glVertex2f(%.3f,%.3f);\n",X,Y);
}
}
int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowSize(500,500);
    glutCreateWindow("week03");

    glutDisplayFunc(display);
    glutMouseFunc(mouse);

    glutMainLoop();
}


