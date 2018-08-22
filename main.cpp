#include "project.h"

//draw a pixel at x,y
void drawPixel(GLint x, GLint y)
{
	glBegin(GL_POINTS);
	glVertex2i(x,y);
	glEnd();
}

void draw_i()
{
	draw();
	glFlush();
}

//intializing stuff
void init()
{
	glutInitWindowSize(800,600);
	glutCreateWindow("OneBigSux");
	glClearColor(0.9,0.9,0.9,0); //setting background to black
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.8,0.0,0.0); //drawings will have red shade
	gluOrtho2D(-399,400,-299,300); //defined limits in which to draw
}

int main(int argc, char **argv)
{
	glutInit(&argc,argv); 
	init();
	glutDisplayFunc(draw_i);
	glutMainLoop();
}
