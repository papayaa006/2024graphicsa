#include <GL/glut.h>///使用GLIUT的外掛
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
int main(int argc, char *argv[])///main函式
{
    glutInit(&argc, argv);///開啟GLUT的功能
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);///143行
    glutCreateWindow("2024電腦圖學第01周");///145行 開一個GLUT視窗
    glutDisplayFunc(display);///display()的函式來畫圖

    glutMainLoop();///主要的迴圈 在這裡一直運作 不結束
}
