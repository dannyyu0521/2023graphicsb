#include <GL/glut.h>
#include <stdio.h>
float X=0,Y=0,Z=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        glBegin(GL_LINE_LOOP);
        glVertex2f(0.09,-0.11);
        glVertex2f(-0.10,-0.15);
        glVertex2f(-0.28,-0.15);
        glVertex2f(-0.49,-0.06);
        glVertex2f(-0.02,0.23);
        glVertex2f(-0.02,0.29);
        glVertex2f(0.02,0.43);
        glVertex2f(0.09,0.53);
    glEnd();
    glutSwapBuffers();

}
void mouse(int button, int state,int x,int y)
{
    X=(x-150)/150.0;
    Y=-(y-150)/150.0;
    if(state==GLUT_DOWN)printf("  glVertex2f(%.2f,&.2f);\n",X,Y);
}
int main(int argc,char *argv[])
{

    glutInit(&argc,argv);

    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("week03");
    glutMouseFunc(mouse);

    glutDisplayFunc(display);
    glutMainLoop();

}
