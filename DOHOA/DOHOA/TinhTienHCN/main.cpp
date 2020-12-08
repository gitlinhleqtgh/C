#include<conio.h>
#include<math.h>
#include<graphics.h>
#define Step 5;
#include <stdio.h>
#include <dos.h>
#include<queue>
#include<iostream>
using namespace std;

int MauNen;
struct ToaDo {
	int x;
	int y;
};	
ToaDo P[100];
int minx,maxx,n,color1,color2;

void thietlapdohoa()
{
    int gd=0,gm;
    initgraph(&gd,&gm,"");
}
void ten(){
	settextstyle(1,0,1);
	setcolor(14);
	outtext("Le Van Linh - Lop 17CNTT2");
}
void Nhaptoado(ToaDo a[],int &n) 
{
/*
//cout<<endl<<"Nhap so dinh cho da giac:";
cin>>n;
for(int i=1;i<=n;i++)
{
cout<<endl<<"a["<<i<<"].x=";
cin>>a[i].x;
cout<<endl<<"a["<<i<<"].y=";
cin>>a[i].y;
}
*/
   n=4; 
   P[1].x = 50;
   P[1].y = 50;
   P[2].x = 100;
   P[2].y = 50;
   P[3].x = 150;
   P[3].y = 100;
   P[4].x = 50;
   P[4].y = 100;

   minx=a[1].x;
   maxx=a[1].x;
   for (int i=2;i<=n;i++)
   {
     if (a[i].x<minx) minx=a[i].x;
     if (a[i].x>maxx) maxx=a[i].x;
   } 
}
//--------------------------------
void Vedagiac(ToaDo a[],int n)
{
   setcolor(color1);
   for (int i=1;i<=n;i++) 
   {
      int j;
      if (i==n) j=1;
      else j=i+1;
      line(a[i].x,a[i].y,a[j].x,a[j].y);
   }
}
void Tomau(ToaDo a[],int n)
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
    if (z[j]>z[k]){
        swap(z[j],z[k]);
    }
       
//Tô màu các do?n t? giao di?m l? t?i giao di?m ch?n
    setcolor(color2);
    for (int k=1;k<=m-1;k++)
    if (k%2!=0) line(i,z[k],i,z[k+1]);
    }
}
void vehinh(int x0,int y0)
{
    rectangle(x0,y0,x0+50,y0+30);
}
int main()
{
	int x0,y0;
    char ch;
    int x,y,n;
    thietlapdohoa();
    x0=getmaxx()/2;
    y0=getmaxy()/2;
    setwritemode(XOR_PUT);
    
    ten();
    
    Nhaptoado(P,n);
	color1=14;
	color2=14;

    Vedagiac(P,n);
    Tomau(P,n);
    
    do
    {
	ch=getch();
    switch(ch)
    {
    case 75: //phím ?
    Vedagiac(P,n);
    x0-=Step;
    Vedagiac(P,n);
    break;
    case 77: //phím ?
    Vedagiac(P,n);
    x0+=Step;
    Vedagiac(P,n);
    break;
    case 72: //phím ?
    Vedagiac(P,n);
    y0-=Step;
    Vedagiac(P,n);
    break;
    case 80: //phím ?
    Vedagiac(P,n);
    y0+=Step;
    Vedagiac(P,n);
    break;
    }
    } while(ch!=27);
    closegraph();
}
