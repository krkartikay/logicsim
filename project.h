#include <iostream>
#include <string>
using namespace std;

#ifdef WINDOWS
#include <windows.h>
#endif

#include <GL/glut.h>


// ABSTRACTION.CPP
void setColor(float r, float g, float b);
void setBackgroundColor(float r, float g, float b);
void drawPixel(int x, int y);
void drawLine(int x1, int y1, int x2, int y2);

// DISPLAY.CPP
void draw();

// LOGIC.CPP