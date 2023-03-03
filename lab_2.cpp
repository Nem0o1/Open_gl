/*#include <stdio.h>
#include "libs/blocks.h"
#include <windows.h>

void display();
//void Initialize();

int main(int argc, char **argv){
    //9-вариант(Ель)
    glutInit(&argc, argv);//запуск gl
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);//определение метода работы (1-ый аргумент говорит об отсутствии анимации, 2-ой о работе в пространстве rgb)
    glutInitWindowSize(1080, 720);// установка размера окна
    glutInitWindowPosition(20,20);// отступ окна от левого верхнего угла
    glutCreateWindow("VAR_9");//название окна
    glClearColor(0.995, 0.995, 0.995, 1.0);//установка цвета очистки (ну типа грунтовки)
    glOrtho(0.0, 12.0, 0.0, 13.0, 0.0, 13.0);// создание системы координат, тут 3-х мерной (X от до, Y от до, Z от до)
    glutDisplayFunc(display);


    glutMainLoop();// передача всех полномочий библиотеке
    return 0;
}

void display(){
    glClear(GL_COLOR_BUFFER_BIT);// очистка экрана базовым цветом

    glFlush();
}
void Initialize()
{
//Выбрать фоновый (очищающий) цвет
glClearColor(1.0,1.0,1.0, 0.f);
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//Установитьпроекцию
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0,1.0,0.0,1.0,-1.0,1.0);
}*/
/*#include<windows.h>
#include "libs/glut.h"

void Initialize()
{
//Выбрать фоновый (очищающий) цвет
glClearColor(1.0,1.0,1.0, 0.f);
glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//Установитьпроекцию
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0.0,1.0,0.0,1.0,-1.0,1.0);
}
void Draw()
{
//Очищаемэкран glClear(GL_COLOR_BUFFER_BIT);
//Отрисовка квадрата 
glColor3f(0.5f,0.2f,1.0f); //Выбираем фиолетовый цвет
glBegin(GL_POLYGON);
glVertex3f(0.25,0.25,0.0); //Координаты квадрата
glVertex3f(0.75,0.25,0.0); 
glVertex3f(0.75,0.75,0.0);
glVertex3f(0.25,0.75,0.0);
glEnd();
glFlush();
}
//Войти в главный цикл
int main(int argc, char **argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowSize(400,400); //Указываем размер окна
glutInitWindowPosition(100,100); //Позиция окна
glutCreateWindow("Polygon"); //Имя окна
Initialize(); //Вызов функции Initialize
glutDisplayFunc(Draw); //Вызов функции отрисовки
glutMainLoop();
return 0;
}*/
#include <math.h>
#include <windows.h>
#include <C:\Users\Иван\OneDrive\Рабочий стол\c\cpp_vuz\libs\glut.h>// Подключение библиотеки glut.h


void circle(float x, float y, float r);
void Initialize()
{
	//Выбрать фоновый (очищающий) цвет
	glClearColor(1.0, 1.0, 1.0, 0.f);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	//Установить проекцию
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}
void Draw()
{

	glColor3f(0.0f, 1.0f, 0.0f);
	circle(0.3, 0.6, 0.2);
	circle(0.6, 0.4, 0.15);
	glColor3f(0.5f, 0.5f, 0.5f);
	glBegin(GL_POLYGON);
	glVertex3f(0.25, 0.6, 0.0); //Координаты квадрата
	glVertex3f(0.35, 0.6, 0.0);
	glVertex3f(0.35, 0.0, 0.0);
	glVertex3f(0.25, 0.0, 0.0);

	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(0.55, 0.4, 0.0); //Координаты квадрата
	glVertex3f(0.65, 0.4, 0.0);
	glVertex3f(0.65, 0.0, 0.0);
	glVertex3f(0.55, 0.0, 0.0);

	glEnd();
	glFlush();
}
//Войти в главный цикл
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(800,800); //Указываем размер окна
	glutInitWindowPosition(100, 100); //Позиция окна
	glutCreateWindow("VAR_9"); //Имя окна
	Initialize(); //Вызов функции Initialize
	glutDisplayFunc(Draw); //Вызов функции отрисовки
	glutMainLoop();
	return 0;
}



void circle(float x, float y, float r) {
	glBegin(GL_LINE_LOOP);
	
	for (int i = 10000; i > 0; i--) {
		glVertex2d(x, y);
		float theta = 2.0f * 3.14 * i / 360;

		float x_1 = r * cos(theta);
		float y_1 = r * sin(theta);
		glVertex2f(x_1 + x, y_1 + y);

	}
	glEnd();
}
