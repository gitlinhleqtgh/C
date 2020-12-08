#include <iostream>
#include <conio.h>
#include <math.h>
#include <graphics.h>
using namespace std;
float a, b, c,min, max;
void KhoiTaoDohoa()
{
    int gd=0,gm;
    initgraph(&gd,&gm,"");
}

 

int round(float x)
{
    if (x>0) return int (x+0.5);
    else return int (x-0.5);
}
 float fb2(float x)
{
    return a*x*x+b*x+c;
}
void vedothib2(float minn,float maxx)
{
int x0,y0,x1,y1,x2,y2;
 float x,dx,k;
 x0=getmaxx()/2;
 y0=getmaxy()/2;
 k=(float)getmaxx()/30;
 dx=0.0001;
 cleardevice();
 setcolor(15);
 line(0,y0,2*x0,y0);
 line(x0,0,x0,2*y0);
 x=minn;
 setcolor(1);
 x1=x0+round(x*k);
 y1=y0-round(fb2(x)*k);
 moveto(x1,y1);
 while (x<maxx)
 {
    x=x+dx;
    x2=x0+round(x*k);
    y2=y0-round(fb2(x)*k);
    lineto(x2,y2);
 }
}
int main()
{
    KhoiTaoDohoa();
    cleardevice();
    a=-3;b=4;c=1;
    vedothib2(-10,10);
    getch();
}
