#include "project.h"

const string title = "OneBigSux";
const int width = 800;
const int height = 600;

MainInterface* UI;
//SquareSymbol* SS;

int main(int argc, char **argv)
{
	init_window(title, argc, argv);
	UI = new MainInterface(width, height);
	//SS = new SquareSymbol();
	run();
}

void clickHandler(int btn,int state,int x,int y)
{
	if(state==GLUT_DOWN)
	{
		cout<<"x "<<x<<endl;
		cout<<"y "<<y<<endl;
	}
	int x_int, y_int;
	SquareSymbol s(x_int, y_int);
}

void draw()
{
	UI->draw();
	glutMouseFunc(clickHandler);
}
