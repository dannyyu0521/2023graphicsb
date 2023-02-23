#include <GL/glut.h>
void display()
{
    ///glColor3f(0,1,0);///顏色綠色
    glBegin(GL_POLYGON);
        glColor3f(1,0,0); glVertex2f(0,1);///上面紅色
        glColor3f(0,1,0); glVertex2f(-1,-1);///左下角 綠色
        glColor3f(0,0,1); glVertex2f(+1,-1);///右下角 藍色
    glEnd();
    glColor3f(1,1,0);///顏色黃色
    glutSolidTeapot(0.3);
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
