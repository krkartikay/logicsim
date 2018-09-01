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
extern const int xN;
extern const int yN;

// ABSTRACTION.CPP
void init_window(string title, int argc, char ** argv);
void run();
void setColor(float r, float g, float b);
void setBackgroundColor(float r, float g, float b);
void drawPixel(int x, int y);
void drawLine(int x1, int y1, int x2, int y2);

// LOGIC.CPP

// DISPLAY.CPP
class GridObject{
	protected:
	const int x, y; // position (coordinates)
	const int grid_x, grid_y;
	public:
		GridObject(int x, int y);
		virtual void draw() = 0; // pure virtual function.
		// implement in all derived classes.
};

class MainGrid{
	vector<GridObject*> gridObjects;
	public:
		const int x_res, y_res;
		int width,height;
		MainGrid(int w,int h);
		void addObject(GridObject* g);
		void draw();
};

class MainInterface{
	public:
	MainGrid grid;
	MainInterface(int w, int h);
	void draw();
};

class SquareSymbol: public GridObject{
	public:
		SquareSymbol(int x, int y): GridObject(x, y){}
		void draw();
};

// MAIN.CPP
extern MainInterface* UI;
void draw();
void clickDown(int x, int y);