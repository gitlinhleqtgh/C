#include<graphics.h> 
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>
#include <queue>
using namespace std;
int MauNen;
typedef int code[4];
int a1,b1,a2,b2;
int x,i,xmin,ymin,xmax,ymax,gd,gm;
code b;

struct ToaDo
{
    int x,y;
};
void initgraph(){
	int gd = 0, gm = 0;
    initgraph(&gd, &gm, "d:\\tc\\bgi");  
}
void NhapDaGiac(int &n,int &x,int &y,ToaDo a[])
{
    cout<<"Nhap so dinh cua da giac n= "; cin>>n;
    for (int i=1;i<=n;i++)
    {
    cout<<"Toa do dinh P["<<i<<"].x= "; cin>>a[i].x;
    cout<<"Toa do dinh P["<<i<<"].y= "; cin>>a[i].y;
    }
    cout<<"Nhap diem (x,y) thuoc da giac:\n";
    //cout<<"nhap x="; cin>>x;
    //cout<<"nhap y="; cin>>y;
}
void VeDaGiac(int n,ToaDo a[],int color)
{
    setcolor(color);
    for (int i=1;i<=n;i++)
    {
    int j;
    if (i==n) j=1; else j=i+1;
    line(a[i].x,a[i].y,a[j].x,a[j].y);
    }
}
void cube(){
    line(70, 300, 70, 100); //AB
    line(70, 100, 300, 100); // BC
    line(300, 100, 300, 300); // CD
    line(300, 300, 70, 300); // DA
    line(70, 100, 120, 50); // BE
    line(120, 50, 400, 50); // EG
    line(400, 50, 400, 250); // GK 
    line(300, 300, 400, 250); // DK 
    line(300, 100, 400, 50); // CG 
    
    
//	line(120,120,200,150);// ab
//	line(200,150,250,70);//bc
//	line(250,70,120,120);//ca
//	line(120,120,125,350);//ae
//	line(200,150,200,400);//bf
//	line(250,70,250,350);//cg
//	line(125,350,200,400);//ef
//	line(200,400,250,350);//fg
	
    
}
void draw8point(int x0, int y0, int x, int y, int color){
	putpixel(x0 + x, y0 + y, color);
	putpixel(x0 - x, y0 + y, color);
	putpixel(x0 + x, y0 - y, color);
	putpixel(x0 - x, y0 - y, color);
	putpixel(x0 + y, y0 + x, color);
	putpixel(x0 - y, y0 + x, color);
	putpixel(x0 + y, y0 - x, color);
	putpixel(x0 - y, y0 - x, color);
}
void circle1(int x0, int y0, int r){
	int x=0; int y=r;
	int p=3-2*r;
	while(x<=y){
		draw8point(x0, y0, x, y, 15);
		if(p<0) p=p+4*x+6;
		else{
			p=p+4*(x-y)+10;
			y=y-1;
		}
		x=x+1;
	}
}
void ToLoang(int x,int y,int color){
    if (getpixel(x,y)==MauNen  && x<getmaxx() && y<getmaxy())
    {
    putpixel(x,y,color);
    ToLoang(x-1,y,color);
    ToLoang(x,y-1,color);
    ToLoang(x+1,y,color);
    ToLoang(x,y+1,color);
    }   
    //delay(1);
}
void ToLoang2(int x,int y,int color)
{
    queue<ToaDo> Q;
    ToaDo m, Tg;
    if (getpixel(x,y)==MauNen  && x<getmaxx() && y<getmaxy())
    {
        m.x = x;
        m.y = y;
        putpixel(m.x, m.y, color);
        Q.push(m);  //  Them 1 diem vao queue, queue size tang 1
        while(Q.empty() == false)   //Xet 4 diem xung quanh voi moi diem luu trong queue (neu queue con phan tu)
        {
            Q.pop();//  Xoa 1 diem phia dau queue, queue size giam 1
            //Xet cac diem lan can cua 1 diem
            if(getpixel(m.x+1, m.y) == MauNen)
            {
                putpixel(m.x+1, m.y, color );
                Tg.x = m.x+1;
                Tg.y = m.y; 
                Q.push(Tg);// Them 1 diem vao cuoi queue
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
            m = Q.front();// Dua ve gia tri dau tien cho hang doi
        //delay(0.1);
        }
    }
}
void macode(int x,int y,code b){
    for(i=1;i<=4;i++)
    b[i]=0;
    if(x<xmin) b[1]=1;
    if(x>xmax) b[2]=1;
    if(y<ymin) b[3]=1;
    if(y>ymax) b[4]=1;
}
void xen(int x1,int y1,int x2,int y2){
	code c1,c2;
    int chon,tong1,tong2,mu2;
    int tgx,tgy;
    do{
	macode(x1,y1,c1);macode(x2,y2,c2);
  	tong1=0;tong2=0;mu2=1;
  	for(i=1;i<=4;i++){
   		tong1=tong1+mu2*c1[i];
   		tong2=tong2+mu2*c2[i];
   		mu2=mu2*2;
  	}
    //kiem tra xem xay ra truong hop nao
    //truong hop dt nam trong HCN 
  	if (tong1+tong2==0){
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
    }while((chon!=1) && (chon!=2));
}
int main(){
    //int x,y,n;
    //ToaDo a[10];
    //NhapDaGiac(n,x,y,a);
    initgraph();
    //VeDaGiac(n,a,15);
    outtextxy(10,2,"Tran Duy Tien- 16CNTT3");
    cube();
    //bar3d(100, 100, 200, 200, 20, 1);
    circle1(450,250,60);
    MauNen=getpixel(450,250);
    ToLoang2(398,248,10);
    setcolor(WHITE);
  	setlinestyle(1,0,0);
  	//line(50,120,150,400);
 	setlinestyle(0,0,0);
  	xen(50,120,150,400);
    getch();
    closegraph();
}
