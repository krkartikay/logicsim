#include "project.h"

void draw_i();
void init_window(string title);

const string title = "OneBigSux";
const int width = 800;
const int height = 600;

int main(int argc, char **argv)
{
	glutInit(&argc,argv); 
	init_window(title);
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
void init_window(string title)
{
	// TODO: Take window size from commandline args else set to fullscreen if possible
	glutInitWindowSize(width,height);
	glutCreateWindow(title.c_str());
	gluOrtho2D(-width/2,width/2,-height/2,height/2); //defined limits in which to draw
}
