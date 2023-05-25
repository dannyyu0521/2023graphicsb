#include <GL/glut.h>
void display()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glutSolidTeapot(0.3);
    glutSwapBuffers();

}
void motion(int x,int y)
{
    glLoadIdentity();
    float eyeX=(x-150)/150.0,eyeY=(150-y)/150.0;
    gluLookAt(eyeX,eyeY,1,0,0,0,0,1,0);
    glutPostRedisplay();
}
int main(int argc,char** argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_DEPTH);
    glutCreateWindow("week15");
    glutMotionFunc(motion);
    glutDisplayFunc(display);
    glutMainLoop();
}
