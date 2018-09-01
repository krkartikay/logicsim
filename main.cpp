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

	int grid_x, grid_y;
	grid_x = x*(UI->grid.x_res)/width;
	grid_y = y*(UI->grid.y_res)/height;
	cout<<"x "<<grid_x<<endl;
	cout<<"y "<<grid_y<<endl;
	SquareSymbol s(grid_x, grid_y);
}

void draw()
{
	UI->draw();
}
