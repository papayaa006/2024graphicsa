#include <GL/glut.h>///�ϥ�GLIUT���~��

void display()
{
    glColor3f(247/255.0,180/255.0,171/255.0);
    glutSolidTeapot( 0.3 );

    glColor3f(251/255.0,233/255.0,219/255.0);
    glutSolidTeapot( 0.2 );

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
