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

void clickDown(int x, int y)
{
	SquareSymbol* s = new SquareSymbol(x, y);
	UI->grid.addObject(s);
}

void draw()
{
	UI->draw();
}
