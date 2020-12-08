#include<iostream>
#include<graphics.h>
#include<stdio.h>
#include<queue>

#include<conio.h>
#include<math.h>
#include<stdlib.h>
typedef int code[4];
//xmin, ymin, xmax, ymax la toa do be nhat va lon nhat cua hinh chu nhat co doan thang bi xen
int xmin, ymin, xmax, ymax;
int i;
code b;

int MauNen;
using namespace std;
struct ToaDo{
	int x,y;
};
//to loang khu de quy
void ToLoang(int x,int y,int color)
{
    queue<ToaDo> Q;
    ToaDo m, Tg;
    if (getpixel(x,y)==MauNen  && x<getmaxx() && y<getmaxy())
    {
        m.x = x;
        m.y = y;
        putpixel(m.x, m.y, color);
        Q.push(m);
        while(Q.empty() == false)
        {
            Q.pop();
            if(getpixel(m.x+1, m.y) == MauNen)
            {
                putpixel(m.x+1, m.y, color );
                Tg.x = m.x+1;
                Tg.y = m.y; 
                Q.push(Tg);
            }  
            if(getpixel(m.x-1, m.y) == MauNen)
            {
                putpixel(m.x-1, m.y, color);
                Tg.x = m.x-1;
                Tg.y = m.y;
                Q.push(Tg);
            }
            if(getpixel(m.x, m.y+1) == MauNen)
            {
                putpixel(m.x, m.y+1, color);
                Tg.x = m.x;
                Tg.y = m.y+1;
                Q.push(Tg);
            }
            if(getpixel(m.x, m.y-1) == MauNen)
            {
                putpixel(m.x, m.y-1, color);
                Tg.x = m.x;
                Tg.y = m.y-1;
                Q.push(Tg);
            }
            m = Q.front();
        }
    }
}

void macode(int x,int y,code b){
    for(i=1;i<=4;i++){
    	b[i]=0;
    	if(x<xmin) b[1]=1;
    	if(x>xmax) b[2]=1;
    	if(y<ymin) b[3]=1;
    	if(y>ymax) b[4]=1;
 	}
}
xen(int x1,int y1,int x2,int y2){
    code c1,c2;
    int  chon,tong1,tong2,mu2;
    int tgx,tgy;
    do{
		macode(x1,y1,c1);
		macode(x2,y2,c2);
  		tong1=0;
		tong2=0;
		mu2=1;
  		for(i=1;i<=4;i++){
   			tong1=tong1+mu2*c1[i];
   			tong2=tong2+mu2*c2[i];
   			mu2=mu2*2;
  		}
    	//kiem tra xem xay ra truong hop nao
  		if (tong1+tong2==0)//truong hop dt nam trong HCN
  		{
   			chon=1;
   			setlinestyle(0,0,0);
   			line(x1,y1,x2,y2);
  		}
  		if((tong1 & tong2)!=0)//doan thang can xen nam ve mot phia cua canh HCN xen
   			chon=2;
  		if(((tong1+tong2)!=0) && ((tong1 & tong2)==0)){
   			chon=3;
   			if(tong1==0){
    			tgx=x1;x1=x2;x2=tgx;
    			tgy=y1;y1=y2;y2=tgy;
   			}
   			macode(x1,y1,b);
   			if(b[1]==1){
    			y1=y1+(xmin-x1)*(y2-y1)/(x2-x1);
    			x1=xmin;
    		}
   			if(b[2]==1){
    			y1=y1+(xmax-x1)*(y2-y1)/(x2-x1);
    			x1=xmax;
   			}
   			if(b[3]==1){
    			x1=x1+(ymin-y1)*(x2-x1)/(y2-y1);
    			y1=ymin;
   			}
   			if(b[4]==1){
    			x1=x1+(ymax-y1)*(x2-x1)/(y2-y1);
    			y1=ymax;
   			}
  		}
    }
	while((chon!=1) && (chon!=2));
	return 0;
}

void cau1(){
	settextstyle(1,0,1);
	setcolor(14);
	outtext("Tran Duy Tien - Lop 16cntt3");
}
int main(){
	
	initwindow(800,800);
	cau1();
	//viet ten ra man hinh	
//	settextstyle(1,0,1);
//	setcolor(14);
//	outtext("Tran Duy Tien - Lop 16cntt3");
//	outtextxy(30,30,"Tran Duy Tien");

	//<--START ve hinh hop chu nhat
	//<--START ve hinh chu nhat
	line(100, 100, 300, 100);
	line(300, 100, 300, 250);
	line(300, 250, 100, 250);
	line(100, 100, 100, 250);
	//<--END ve hinh chu nhat
//=>xmin, ymin, xmax, ymax cua hinh chu nhat
	xmin=100, ymin=100, xmax=300, ymax=250;
		
	line(100, 100, 150, 60);
	line(300, 100, 350, 60);
	line(150, 60, 350, 60);
	line(300, 250, 350, 210);
	line(350, 210, 350, 60);
	//<-- END ve hinh hop chu nhat
	
	//ve hinh tron
	circle(350, 210, 40);
	
//	set hình dang duong thang bi xen, so 1 la gach ngang, có the thay tu 1->4
	setlinestyle(1, 0, 0);
	
	//ve duong thang cat ngang hinh chu nhat
	line(20, 130, 220, 300);
	
	//set hinh dang duong thang bi xen (phan nam trong hinh chu nhat), so 0 la nét lièen
	setlinestyle(0, 0, 0);
	//	truyen vao toa do cua duong thang (xem dòng 159)
	xen(20,130,220,300);
	
	//lay ra mau nen tai toa do (340, 210) de to mau
	MauNen=getpixel(340,210);
	ToLoang(340,210,10);
	getch();
	closegraph();		
}
