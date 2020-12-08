#include<iostream>
#include<graphics.h>
#include<conio.h>


void HoTen()
{
	settextstyle(6,0,3);
	setcolor(11);
	outtextxy(13,15,"Tran Van Sinh-3120217141");
}
void hinh()
{
	line ( 250  , 200 , 500  , 200);
	line ( 500  , 200 , 450 , 100);
	line ( 450 , 100 , 250 , 100);
	line ( 250 , 100 , 250 , 200);
	
}

void di_hinh(int x,int y,int x1,int y1)
{
	line ( 250 + x , 200 + y , 500 + x1 , 200 + y1);
	line ( 500 + x , 200 + y , 450 + x1 , 100 + y1);
	line ( 450 + x , 100 + y , 250 + x1 , 100 + y1);
	line ( 250 + x , 100 + y , 250 + x1 , 200 + y1);
	
}
void chay(){
	char ch;
	int x=0,y=0,x1=0,y1=0;
	setwritemode(XOR_PUT);
	do{
		ch=getch();
		switch(ch){
			case 75:
					cleardevice();
					x=x-5;
					x1=x1-5;
					HoTen();
					di_hinh(x,y,x1,y1);
				break;
			case 77:
					cleardevice();
					x+=5;
					x1+=5;
				HoTen();
					di_hinh( x, y, x1, y1);
				break;
			
			case 72:
					cleardevice();
					y1-=5;
					y-=5;
					HoTen();
					di_hinh( x, y, x1, y1);
				break;
			
			case 80:
					cleardevice();
					HoTen();
					y1+=5;
					y+=5;
				
					di_hinh( x,y, x1, y1);
				break;		
				
		}
	}
	while(ch!=27);
}




int main()
{
	int gd , gm ;
	initgraph (&gd ,&gm , "C://TC//BGI");
	setcolor(12);
	HoTen();
	hinh();
	
	chay();
	getch();
	closegraph();	
}

