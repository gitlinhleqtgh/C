#include<graphics.h>
#include<conio.h>
int color;
using namespace std;
void KhoiTaoDoHoa(){
	int driver=0,mode;
	initgraph(&driver,&mode,"");
}
void Bre_Line(int x1,int y1,int x2,int y2)
{
	int x_max,x,y;
	int dx=abs(x1-x2);
	int dy=abs(y1-y2);
	int c1=2*dy;
	int c2=2*(dy-dx);
	int p=2*dy-dx;
	if(x1>x2){
		x=x2;y=y2;x_max=x1;
	}else{
		x=x1;y=y1;x_max=x2;
	}
	putpixel(x,y,color);
	while(x<x_max){
		if(p<0) p=p+c1;
		else{
			y=y+1;
			p=p+c2;
		}
		x=x+1;
		putpixel(x,y,color);
	}
}
void Mid_Line(int x1,int y1,int x2,int y2)
// 0<m<1
{
 int x_max,x,y;
 int dx=abs(x1-x2);
 int dy=abs(y1-y2);
 int p=dy-dx/2;
 if (x1>x2)
 {
     x=x2; y=y2; x_max=x1;
 }
 else
      {
      x=x1; y=y1; x_max=x2;
      }
 putpixel(x,y,color);
 while (x < x_max)
 {
    if (p<0) p=p+dy;
    else
         {
          y=y+1;
          p=p+dy-dx;
         }
   x=x+1;
   putpixel(x,y,color);
 }
}

main(){
	KhoiTaoDoHoa();
	color = 14;
	setcolor(color);
	Bre_Line(20,30,300,200);
	getch();
	color=4;
	setcolor(color);
	Mid_Line(20,30,300,200);
	getch();
	setcolor(10);
	line(20,30,300,200);
	getch();
}
