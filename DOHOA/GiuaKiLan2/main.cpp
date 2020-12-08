#include <conio.h>
#include <iostream>
#include <graphics.h>

using namespace std;

struct Toado
{
 int x,y;
};
Toado P[100];
int minx,maxx,n,color1,color2;
/*void vehinh(int x0,int y0)
{
rectangle(x0,y0,x0+200,y0+200);
}*/

void vehinh(int x1, int y1, int x2, int y2, int x3, int y3)
{
	setcolor(BLUE);
	
	 line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
   // line(x4, y4, x1, y1);
 //line(200,100,400,200);
 //line(200,200,200,300);
 //line(400,200,250,350);
// line(400,100,400,300);
 //line(50,200,250,200);
 //line(250,200,250,400);
 //line(50,400,250,400);
 //line(50,200,50,400);
// line(50,200,200,100);
// line(50,400,200,300);
 //line(250,400,400,300);
// line(250,200,400,100);
// line(200,300,400,300);
}
//------------------ --------------
void Nhaptoado(Toado a[],int &n)
{
/*
 cout<<endl<<"Nhap so dinh cho da giac:";
 cin>>n;
 for(int i=1;i<=n;i++)
 {
 cout<<endl<<"a["<<i<<"].x=";
 cin>>a[i].x;
 cout<<endl<<"a["<<i<<"].y=";
 cin>>a[i].y;
 }
*/
n=3;
P[1].x = 200;
P[1].y = 100;
P[2].x = 50;
P[2].y = 250;
P[3].x = 250;
P[3].y = 350;
/*
P[1].x = 50;
P[1].y = 200;
P[2].x = 50;
P[2].y = 200;
P[3].x = 250;
P[3].y = 400;*/
minx=a[1].x;
maxx=a[1].x;
for (int i=2;i<=n;i++)
{
 if (a[i].x<minx) minx=a[i].x;
 if (a[i].x>maxx) maxx=a[i].x;
}
}
//--------------------------------
void Vedagiac(Toado a[],int n)
{
 setcolor(4);
 for (int i=1;i<=n;i++)
 {
 int j;
 if (i==n) j=1;
 else j=i+1;
 line(a[i].x,a[i].y,a[j].x,a[j].y);
 }
}
//--------------------------------
void Tomau(Toado a[],int n)
{
 //Duy?t Dy t? Min t?i Max
 for(int i=minx+1;i<=maxx-1;i++)
 {
int m=0,t,s,tg,z[100];
 //Tìm các giao di?m z[]
for (int j=1;j<=n;j++)
 {
 t=j+1; if (j==n) t=1;
 s=j-1; if (j==1) s=n;
 if (i==a[j].x)
 {
 if((i>min(a[s].x,a[t].x))&&(i<max(a[s].x,a[t].x)))
{
 m++;
 z[m]=a[j].y;
}
else
{
 m++;
 z[m]=a[j].y;
 m++;
 z[m]=a[j].y;
}
 }
 if ((i>min(a[j].x,a[t].x))&&(i<max(a[t].x,a[j].x)))
 {
 ++m;
 float r=(float)(a[t].y-a[j].y)/(a[t].x-a[j].x);
 z[m]=(int)(r*(i-a[j].x))+a[j].y;
 }
 }
 //S?p x?p các giao di?m z[] tang d?n theo y
 for(int j=1;j<=m-1;++j)
 for (int k=j+1;k<=m;++k)
if (z[j]>z[k])
 swap(z[j],z[k]);
 //Tô màu các do?n t? giao di?m l? t?i giao di?m ch?n
setcolor(14);
 for (int k=1;k<=m-1;k++)
if (k%2!=0) line(i,z[k],i,z[k+1]);
}
}
//--------------------------------
main()
{
	int step=5;
  int x1 = 200, y1 = 100, x2 = 400, y2 = 200, x3 = 250, y3 = 350;
 char ch;
 int gd=0,gm;
 Nhaptoado(P,n);
 initgraph(&gd,&gm,"");
 setcolor(9);
   settextstyle(4,0,4);
   outtextxy(250,20,"Le Van Linh");
   setcolor(5);
    settextstyle(3,0,5);
    outtextxy(200,70,"A"); 
    settextstyle(3,0,5);
    outtextxy(420,200,"D");  
    settextstyle(3,0,5);
    outtextxy(250,360,"C");
    settextstyle(3,0,5);
    outtextxy(50,260,"B");
    
 Vedagiac(P,n);
 Tomau(P,n);
 vehinh(x1, y1, x2, y2, x3, y3);
    getch();
    setwritemode(XOR_PUT);
    //vehinh(x1, y1, x2, y2, x3, y3);
    do {
        ch = getch();
        switch(ch) {
            case 72: {
                vehinh(x1, y1, x2, y2, x3, y3);
                y1 -= step;
                y2 -= step;
                y3 -= step;
              //  y4 -= step;
                vehinh(x1, y1, x2, y2, x3, y3);
                break;
            }
            
            case 75: {
                vehinh(x1, y1, x2, y2, x3, y3);
                x1 -= step;
                x2 -= step;
                x3 -= step;
               // x4 -= step;
                vehinh(x1, y1, x2, y2, x3, y3);
                break;
            }
            
            case 77: {
                vehinh(x1, y1, x2, y2, x3, y3);
                x1 += step;
                x2 += step;
                x3 += step;
                //x4 += step;
                vehinh(x1, y1, x2, y2, x3, y3);
                break;
            }
            
            case 80: {
                vehinh(x1, y1, x2, y2, x3, y3);
                y1 += step;
                y2 += step;
                y3 += step;
               // y4 += step;
                vehinh(x1, y1, x2, y2, x3, y3);
                break;
            }
        }
    } while(ch != 27);
    getch();
}
/* z0=50;
 k0=200;
 setwritemode(XOR_PUT);
 vehinh(z0,k0);
 do
 { ch=getch();
 switch(ch)
 {
case 75: //phím ?
vehinh(z0,k0);
z0-=Step;
vehinh(z0,k0);
break;
case 77: //phím ?
vehinh(z0,k0);
z0+=Step;
vehinh(z0,k0);
break;
case 72: //phím ?
vehinh(z0,k0);
k0-=Step;
vehinh(z0,k0);
break;
case 80: //phím ?
vehinh(z0,k0);
k0+=Step;
vehinh(z0,k0);
break;
 }
 } while(ch!=27);
 closegraph();*/



