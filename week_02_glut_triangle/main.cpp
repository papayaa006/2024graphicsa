#include <GL/glut.h>///�ϥ�GLIUT���~��

void display()
{
    glBegin(GL_POLYGON);///�}�l�e
        glColor3f(1,0,0); glVertex2f(0, 1);
        glColor3f(0,1,0); glVertex2f(+1, -0.6);
        glColor3f(0,0,1); glVertex2f(-1, -0.6);
    glEnd();
    glutSwapBuffers();
}

int main(int argc, char *argv[])///main�禡
{
    glutInit(&argc, argv);///�}��GLUT���\��
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143��
    glutCreateWindow("2024�q���Ͼǲ�01�P");///145�� �}�@��GLUT����
    glutDisplayFunc(display);///display()���禡�ӵe��

    glutMainLoop();///�D�n���j�� �b�o�̤@���B�@ ������
}
