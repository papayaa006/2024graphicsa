#include <GL/glut.h>///�ϥ�GLIUT���~��
#include <math.h>
void myCircle(float x, float y, float r){
    glBegin(GL_POLYGON);
        for(float a=0; a<=3.1415*2; a+=0.1){
            glVertex2f(r*cos(a)+x, r*sin(a)+y);
        }
    glEnd();
}

void display(){
    myCircle(0.5,0.5,0.3);
    myCircle(-0.5,0.5,0.3);
    myCircle(0,-0.1,0.6);
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
