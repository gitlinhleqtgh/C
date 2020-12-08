#include<conio.h>
#include<math.h>
#include<graphics.h>
#define Step 5;

void thietlapdohoa(){
	int gd=0, gm;
	initgraph(&gd,&gm,"d:\\TC\\bgi");
	
}
void vehinh(int x0, int y0){
	rectangle(x0,y0,x0+50,y0+30);
}
int main(){
	int x0,y0;
	char ch;
	thietlapdohoa();
	x0=getmaxx()/2;
	y0=getmaxy()/2;
	setwritemode(XOR_PUT);
	vehinh(x0,y0);
	outtext(" neu em con ton tai  : ");
	do{
		ch=getch();
		switch(ch){
			case 75:
				vehinh(x0,y0);
				x0-=Step;
				break;
			case 77:
				vehinh(x0,y0);
				x0+=Step;
				break;
			case 72:
				vehinh(x0,y0);
				y0-=Step;
				break;
			case 80:
				vehinh(x0,y0);
				y0+=Step;
				break;
		}
	}
	while(ch!=27);
	closegraph();
}
