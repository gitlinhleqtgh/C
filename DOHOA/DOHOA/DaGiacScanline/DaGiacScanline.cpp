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
//------------------ --------------
void Nhaptoado(Toado a[],int &n) 
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
   n=8; 
   P[1].x = 50;
   P[1].y = 250;
   P[2].x = 250;
   P[2].y = 300;
   P[3].x = 350;
   P[3].y = 260;
   P[4].x = 270;
   P[4].y = 180;
   P[5].x = 300;
   P[5].y = 150;
   P[6].x = 200;
   P[6].y = 50;
   P[7].x = 70;
   P[7].y = 100;
   P[8].x = 150;
   P[8].y = 150;
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
   setcolor(color1);
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
    if (z[j]>z[k]){
        swap(z[j],z[k]);
    }
       
//Tô màu các do?n t? giao di?m l? t?i giao di?m ch?n
setcolor(color2);
for (int k=1;k<=m-1;k++)
if (k%2!=0) line(i,z[k],i,z[k+1]);
}
}
//--------------------------------
int main()
{
int gd=0,gm;
Nhaptoado(P,n);
cout<<endl<<"Nhap mau duong vien:";
cin>>color1;
cout<<endl<<"Nhap mau to da giac:";
cin>>color2;
initgraph(&gd,&gm,"");
Vedagiac(P,n);
getch();
Tomau(P,n);
getch();
}
