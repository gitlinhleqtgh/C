#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<iostream>
#include<math.h>
 
#define TILE 50
 
void drawxy(int x,int y)
{
    int Ox=x,Oy=y;
    line(0,Oy,getmaxx(),Oy);
    line(Ox,0,Ox,getmaxy());
    outtextxy(Ox+2,Oy+2,"O");
}
 
float f(float x)
{
    //return sin(x*M_PI); //xai cho sin, cos :P
    return x*x*x; //x^3
}
 
int main()
{
    int gd=0,gm;
    initgraph(&gd,&gm,"D:\\borlandc\\bgi");
    int Ox=getmaxx()/2,Oy=getmaxy()/2;
    drawxy(Ox,Oy);
    putpixel(Ox,Oy,YELLOW);
    setviewport(Ox,Oy,getmaxx(),getmaxy(),0);
 
    float y,x,dx;
    dx=(3.+3.)/300;
    int dem;
 
    setcolor(YELLOW);
    x=-3;
    y=f(x);
    moveto(x*TILE,-y*TILE);
    for(dem=0;dem<=300;++dem)
    {
        x+=dx;
        y=f(x);
        lineto(x*TILE,-y*TILE);
    }
 
    getch();
    closegraph();
}
