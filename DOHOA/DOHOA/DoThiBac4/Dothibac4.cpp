#include<conio.h>
#include<graphics.h>
float a,b,c,d,e ,min,max;
int round(float x)
{
if (x>0) return int (x+0.5);
else return int (x-0.5);
}
void khoitaodohoa()
{
int gd=0,gm=0;
initgraph(&gd,&gm,"");
}
float f(float x)
{
 return(a*x*x*x*x+b*x*x*x+c*x*x+d*x+e);
}
void vedothi(float min,float max)
{
int x0,y0,x1,y1,x2,y2,x3,y3;
float x,dx,k;
x0=getmaxx()/2;
y0=getmaxy()/2;
k=(float)getmaxx()/50;
dx=0.0001;
setcolor(12);
line(0,y0,2*x0,y0);
line(x0,0,x0,2*y0);
x=min;
setcolor(14);
x1=x0+round(x*k);
y1=y0-round(f(x)*k);
moveto(x1,y1);
x2=x0+round(x*k);
y2=y0-round(f(x)*k);
moveto(x2,y2);
while (x<max)
{
x=x+dx;
x3=x0+round(x*k);
y3=y0-round(f(x)*k);
lineto(x3,y3);
}
}
int main()
{
khoitaodohoa();
min=-5;max=5;
a=-1;b=-1;c=3;d=2;e=-6;
vedothi(min,max);
getch();
}
