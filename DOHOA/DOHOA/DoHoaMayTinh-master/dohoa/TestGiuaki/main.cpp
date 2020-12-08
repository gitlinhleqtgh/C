#include <graphics.h>
#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include<queue>
using namespace std;

int MauNen;
struct ToaDo
{
    int x;
    int y;
};

void KhoiTaoDoHoa() {
	int driver = 0, mode = 0;
	initgraph(&driver, &mode, "");
}

void cau1(){
	settextstyle(1,0,1);
	setcolor(14);
	outtext("Le Van Linh - 17CNTT2");
}

void VeDaGiac(int n,ToaDo a[],int color)
{
    setcolor(color);
    for (int i=1; i<=n; i++)
    {
        int j;
        if (i==n) j=1;
        else j=i+1;
        line(a[i].x,a[i].y,a[j].x,a[j].y);// ve duong thang
    }
}

void ve8diem(int x,int y,int xc, int yc,int color){
    putpixel(x+xc,y+yc,color);
    putpixel(y+xc,x+yc,color);
    putpixel(y+xc,-x+yc,color);
    putpixel(x+xc,-y+yc,color);
    putpixel(-x+xc,-y+yc,color);
    putpixel(-y+xc,x+yc,color);
    putpixel(-y+xc,-x+yc,color);
    putpixel(-x+xc,y+yc,color);

}
void veduongtron(int x, int y,int r){
   int p = 3 - 2*r;
   while(x <=y ){
        ve8diem(x,y,550,250,9);
        if(p<0){
            p=p+4*x+6;
        }else{
            y--;
            p=p+4*(x-y)+10;
        }
    x++;
   }
}

void ToLoang(int x, int y, int color){
	if((getpixel(x,y) == MauNen)
		&& x>0 && x < getmaxx() && y > 0 && y < getmaxx())
		{
			putpixel(x, y, color);
			ToLoang(x+1, y, color);
			ToLoang(x-1, y, color);
			ToLoang(x, y+1, color);
			ToLoang(x, y-1, color);
		}
}
//void ToLoang(int x,int y,int color)
//{
//    queue<ToaDo> Q;
//    ToaDo m, Tg;
//    if (getpixel(x,y)==MauNen  && x<getmaxx() && y<getmaxy())
//    {
//        m.x = x;
//        m.y = y;
//        putpixel(m.x, m.y, color);
//        Q.push(m);
//        while(Q.empty() == false)
//        {
//            Q.pop();
//            if(getpixel(m.x+1, m.y) == MauNen)
//            {
//                putpixel(m.x+1, m.y, color );
//                Tg.x = m.x+1;
//                Tg.y = m.y; 
//                Q.push(Tg);
//            }  
//            if(getpixel(m.x-1, m.y) == MauNen)
//            {
//                putpixel(m.x-1, m.y, color);
//                Tg.x = m.x-1;
//                Tg.y = m.y;
//                Q.push(Tg);
//            }
//            if(getpixel(m.x, m.y+1) == MauNen)
//            {
//                putpixel(m.x, m.y+1, color);
//                Tg.x = m.x;
//                Tg.y = m.y+1;
//                Q.push(Tg);
//            }
//            if(getpixel(m.x, m.y-1) == MauNen)
//            {
//                putpixel(m.x, m.y-1, color);
//                Tg.x = m.x;
//                Tg.y = m.y-1;
//                Q.push(Tg);
//            }
//            m = Q.front();
//        }
//    }
//}
main(){

	KhoiTaoDoHoa();
	//initwindow(1000,1000);
	cau1();
	
	ToaDo a[10];
    a[1].x=100;
    a[1].y=100;
    a[2].x=300;
    a[2].y=100;
    a[3].x=300;
    a[3].y=300;
    a[4].x=100;
    a[4].y=300;
    
    VeDaGiac(4,a,15);
	ToaDo b[10];
    b[1].x=300;
    b[1].y=50;
    b[2].x=500;
    b[2].y=50;
    b[3].x=300;
    b[3].y=100;
    b[4].x=100;
    b[4].y=100;
    VeDaGiac(4,b,15);
        ToaDo c[10];
    c[1].x=300;
    c[1].y=100;
    c[2].x=500;
    c[2].y=50;
    c[3].x=500;
    c[3].y=225;
    c[4].x=300;
    c[4].y=300;
    VeDaGiac(4,c,15);
	 int x=0,y=100,r=100;
    veduongtron(x,y,r);
    line(50, 100, 200, 350); // ve duong thang
    MauNen = getpixel(480,225);
   // ToLoang(480,255,14);
   	ToLoang(340,210,10);
	getch();
	closegraph();
}
