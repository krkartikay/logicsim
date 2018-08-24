#include "project.h"

// USELESS SQUARE SYMBOL

void SquareSymbol::draw(){
	// TODO
}

// MAIN UI

MainInterface::MainInterface(int w, int h):grid(w,h){
	setBackgroundColor(0.9,0.9,0.9);
}

void MainInterface::draw(){
	this->grid.draw();
}

// MAIN GRID

MainGrid::MainGrid(int w,int h)
	:	x_res(10),
		y_res(10)
{
	width = w;
	height = h;
}

void MainGrid::draw(){
	for(int i=0;i<width;i+=width/x_res)
	{
		drawLine(i,0,i,height);
	}
	for(int i=0;i<height;i+=height/y_res)
	{
		drawLine(0,i,width,i);
	}
}
