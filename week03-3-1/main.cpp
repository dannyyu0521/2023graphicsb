#include <GL/glut.h>
float X=0,Y=0,Z=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();///備份矩陣
    glTranslatef(X,Y,Z);///會改變你的矩陣
    glutSolidTeapot(0.3);///畫出實心的茶壺
    glPopMatrix();///還原矩陣
    glutSwapBuffers();

}
void mouse(int button, int state,int x,int y)
{
    X=(x-150)/150.0;
    Y=-(y-150)/150.0;
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
