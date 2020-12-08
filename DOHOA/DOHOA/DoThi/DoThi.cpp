#include<conio.h>
#include<graphics.h>
float a,b,c,d,min,max;
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
  return(a*x*x*x+b*x*x+c*x+d);
}
void vedothi(float min,float max)
{
 int x0,y0, //goc toa do
      x1,y1, //diem xuat phat
     x2,y2; //diem ve den
 float x, //bien chay tu min-->max
        dx,//buoc tang x
       k; //he so phong to
 //Dat goc toa do o giua man hinh
 x0=getmaxx()/2;
 y0=getmaxy()/2;
 k=(float)getmaxx()/10;
 dx=0.001;
 setbkcolor(15); //mau nen
 cleardevice();  //xoa man hinh
 //Ve truc toa do
 setcolor(1);
 line(0,y0,2*x0,y0);
 line(x0,0,x0,2*y0);
 //Ve do thi 
 x=min;
 setcolor(4);
 //Diem xuat phat
 x1=x0+round(x*k);
 y1=y0-round(f(x)*k);
 moveto(x1,y1);
 while (x<max)
 {
    x=x+dx;
    x2=x0+round(x*k);
    y2=y0-round(f(x)*k);
    lineto(x2,y2);
 }
}
main()
{
 khoitaodohoa();
 min=-10;max=10;
 a=1;b=-3;c=-1;d=2;
 vedothi(min,max);
 getch();
}
