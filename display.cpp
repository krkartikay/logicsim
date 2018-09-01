#include "project.h"

// USELESS SQUARE SYMBOL
void SquareSymbol::draw(){
	// TODO
	int fX=width/xN;
	int fY=height/yN;
	setColor(0,0,0);
	drawLine(grid_x*fX,grid_y*fY,grid_x*fX+fX,grid_y*fY);
	drawLine(grid_x*fX,grid_y*fY,grid_x*fX,grid_y*fY+fY);
	drawLine(grid_x*fX,grid_y*fY+fY,grid_x*fX+fX,grid_y*fY+fY);
	drawLine(grid_x*fX+fX,grid_y*fY+fY,grid_x*fX+fX,grid_y*fY);
	setColor(1,1,1);
	cout<<"Square Symbol Drawn in "<<grid_x<<","<<grid_y<<"\n";
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
	:	x_res(xN),
		y_res(yN)
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
	for(auto gObj : gridObjects)
	{
		gObj->draw();
	}
}

void MainGrid::addObject(GridObject* g){
	gridObjects.push_back(g);
	this->draw();
}

GridObject::GridObject(int x, int y)
	:	x(x),
		y(y),
		grid_x(x*(UI->grid.x_res)/width),
		grid_y(y*(UI->grid.y_res)/height)
{
}