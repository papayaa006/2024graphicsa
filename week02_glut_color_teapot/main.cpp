#include <GL/glut.h>///使用GLIUT的外掛

void display()
{
    glColor3f(247/255.0,180/255.0,171/255.0);
    glutSolidTeapot( 0.3 );

    glColor3f(251/255.0,233/255.0,219/255.0);
    glutSolidTeapot( 0.2 );

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
