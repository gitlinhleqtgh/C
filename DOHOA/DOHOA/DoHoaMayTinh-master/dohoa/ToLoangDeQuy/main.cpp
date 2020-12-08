#include <conio.h>
#include <iostream>
#include<graphics.h>
#include <math.h>
#include <stdio.h>
#include <dos.h>
#include<queue>
using namespace std;
struct ToaDo
{
    int x,y;
};
int MauNen;
//void KhoiTaoDoHoa() {
//	int driver = 0, mode = 0;
//	initgraph(&driver, &mode, "");
//}
//void ten(){
//	settextstyle(1,0,1);
//	setcolor(14);
//	outtext("Le Van Linh - Lop 17CNTT2");
//}

void NhapDaGiac(int &n,int &x,int &y,ToaDo a[])
{
    cout<<"Nhap so dinh cua da giac n= "; cin>>n;
    for (int i=1;i<=n;i++)
    {
    cout<<"Toa do dinh P["<<i<<"].x= "; cin>>a[i].x;
    cout<<"Toa do dinh P["<<i<<"].y= "; cin>>a[i].y;
    }
    cout<<"Nhap diem (x,y) thuoc da giac:\n";
    cout<<"nhap x="; cin>>x;
    cout<<"nhap y="; cin>>y;
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
void ToLoang(int x,int y,int color)
{
    if (getpixel(x,y)==MauNen  && x<getmaxx() && y<getmaxy())
    {
    putpixel(x,y,color);
    ToLoang(x-1,y,color);
    ToLoang(x,y-1,color);
    ToLoang(x+1,y,color);
    ToLoang(x,y+1,color);
    }   
    delay(1);
}
int main()
{
//	KhoiTaoDoHoa();
//	ten();
    int x,y,n,Gd,Gm;
    ToaDo a[10];
    NhapDaGiac(n,x,y,a);
    Gd=DETECT;
    initgraph(&Gd,&Gm,"");
    VeDaGiac(n,a,15);
    MauNen=getpixel(x,y);
    ToLoang(x,y,10);
    getch();
    closegraph();
}
