#include <iostream>
#include <vector>
#include <string>
using namespace std;

#ifdef WINDOWS
#include <windows.h>
#endif

#include <GL/glut.h>

extern const string title;
extern const int width;
extern const int height;

// ABSTRACTION.CPP
void init_window(string title, int argc, char ** argv);
void run();
void setColor(float r, float g, float b);
void setBackgroundColor(float r, float g, float b);
void drawPixel(int x, int y);
void drawLine(int x1, int y1, int x2, int y2);

// MAIN.CPP
void draw();

// LOGIC.CPP

// DISPLAY.CPP
class GridObject{
	const int x, y; // position (coordinates)
	public:
		GridObject(int x, int y):x(x),y(y){}
		virtual void draw() = 0; // pure virtual function.
		// implement in all derived classes.
};

class MainGrid{
	vector<GridObject> gridObjects;
	const int x_res, y_res;
	public:
	int width,height;
	MainGrid(int w,int h);
	void draw();
};

class MainInterface{
	MainGrid grid;
	public:
	MainInterface(int w, int h);
	void draw();
};

class SquareSymbol: GridObject{
	public:
		SquareSymbol(int x, int y): GridObject(x, y){}
		void draw();
};
