#include <iostream>
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

// DISPLAY.CPP
void draw();

// LOGIC.CPP
