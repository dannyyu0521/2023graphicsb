#include <GL/glut.h>
void display()
{
    glColor3f(1,1,0);///�C�����
    glutSolidTeapot(0.5);///�e�X��ߪ��j����
    glColor3f(0,1,0);///�C����
    glutSolidTeapot(0.3);///�e�X��ߪ��p����
    glutSwapBuffers();
}
int main(int argc,char *argv[])
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week02");///�n�ؤ@�ӵ����W�s...
    glutDisplayFunc(display);
    glutMainLoop();
}