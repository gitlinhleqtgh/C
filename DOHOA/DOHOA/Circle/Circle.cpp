#include<graphics.h>
#include<conio.h>
int color;
using namespace std;
void KhoiTaoDoHoa(){
	int driver=0,mode;
	initgraph(&driver,&mode,"");
}
void ve8diem(int x0,int y0,int x, int y, int Color)
{
    putpixel( x0 + x , y0 + y ,Color);
    putpixel( x0 - x , y0 + y ,Color);
    putpixel( x0 + x , y0 - y ,Color);
    putpixel( x0 - x , y0 - y ,Color);
    putpixel( x0 + y , y0 + x ,Color);
    putpixel( x0 - y , y0 + x ,Color);
    putpixel( x0 + y , y0 - x ,Color);
    putpixel( x0 - y , y0 - x ,Color);
}

 

void Bre_Circle(int x0,int y0,int r)
{
    int x=0, y=r;
    int p=3-2*r;
    while (x<=y)
    {
     ve8diem(x0,y0,x,y,color);
     if(p<0) p=p+4*x+6;
     else
       {
        p=p+4*(x-y)+10;
        y=y-1;
       }
     x=x+1;
    }
}
void Mid_Circle(int x0,int y0,int r)
{
    int x=0, y=r;
    int p=1-r;
    while (x<=y)
    {
     ve8diem(x0,y0,x,y,color);
     if(p<0) p=p+2*x+3;
     else
       {
        p=p+2*(x-y)+5;
        y=y-1;
       }
     x=x+1;
    }
}

 main(){
 	KhoiTaoDoHoa();
 	color=14;
 	int x0=200,y0=150,R=120;
 	Bre_Circle(x0,y0,R);
 //	Mid_Circle(x0,y0,R);
 	getch();
}

