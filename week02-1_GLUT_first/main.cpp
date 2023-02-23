#include <GL/glut.h>
void display()
{
    glColor3f(1,1,0);///顏色黃色
    glutSolidTeapot(0.5);///畫出實心的大茶壺
    glColor3f(0,1,0);///顏色綠色
    glutSolidTeapot(0.3);///畫出實心的小茶壺
    glutSwapBuffers();
}
int main(int argc,char *argv[])
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("week02");///要建一個視窗名叫...
    glutDisplayFunc(display);
    glutMainLoop();
}
