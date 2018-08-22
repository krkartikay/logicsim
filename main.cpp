#include "project.h"

const string title = "OneBigSux";
const int width = 800;
const int height = 600;

int main(int argc, char **argv)
{
	init_window(title, argc, argv);
}

void draw()
{
	setBackgroundColor(0.9, 0.9, 0.9);
	setColor(0,0,0);
	drawPixel(0,0);
	drawLine(10,0,0,10);
}