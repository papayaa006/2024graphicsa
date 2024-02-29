#include <GL/glut.h>///使用GLIUT的外掛

void display()
{
    glBegin(GL_POLYGON);///開始畫
        glColor3f(1,0,0); glVertex2f(0, 1);
        glColor3f(0,1,0); glVertex2f(+1, -0.6);
        glColor3f(0,0,1); glVertex2f(-1, -0.6);
    glEnd();
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
