#include "project.h"

const string title = "OneBigSux";
const int width = 800;
const int height = 600;

MainInterface* UI;

int main(int argc, char **argv)
{
	init_window(title, argc, argv);
	UI = new MainInterface(width, height);
	run();
}

void draw()
{
	UI->draw();
	drawPixel(0,0);
	drawLine(10,0,0,10);
}