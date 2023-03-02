#include <GL/glut.h>

void display()

{
    glPushMatrix();///備份矩陣
    glTranslatef(0.5,0.5,0);///會改變你的矩陣
    glutSolidTeapot(0.3);///畫出實心的茶壺
    glPopMatrix();///還原矩陣
    glutSwapBuffers();

}

int main(int argc,char *argv[])

{

    glutInit(&argc,argv);

    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("GLUT Shapes");

    glutDisplayFunc(display);

    glutMainLoop();

}
