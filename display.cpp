#include "project.h"

MainInterface::MainInterface(int w, int h):grid(w,h){
    setBackgroundColor(0.9,0.9,0.9);
}

MainGrid::MainGrid(int w,int h){
    width = w;
    height = h;
}

void MainGrid::draw(){
    drawPixel(100,100);
    drawPixel(200,200);
    for(int i=0;i<width;i+=width/10)
    {
        drawLine(i,0,i,height);
    }
    for(int i=0;i<height;i+=height/10)
    {
        drawLine(0,i,width,i);
    }
}

void MainInterface::draw(){
    this->grid.draw();
}
