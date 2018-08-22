#include "project.h"

void draw_i();
void init(string);

const string title = "OneBigSux";

int main(int argc, char **argv)
{
	glutInit(&argc,argv); 
	init(title);
	glutDisplayFunc(draw_i);
	glutMainLoop();
}

// draw and call glFlush
void draw_i()
{
	draw();
	glFlush();
}

//intializing stuff
void init(string title)
{
	glutInitWindowSize(800,600);
	glutCreateWindow(title.c_str());
	gluOrtho2D(-399,400,-299,300); //defined limits in which to draw
}
