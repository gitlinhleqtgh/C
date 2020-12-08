#include<iostream>
#include<conio.h>
#include<graphics.h>
#define LEFT 1
#define RIGHT 2
#define ABOVE 3
#define BELOW 4
struct ToaDo2D
{
int x,y;
};
ToaDo2D h[100],luu[100];
ToaDo2D tren,duoi,giaodiem;
int n,dem;
int round(float x)
{
if(x>0) return int(x+0.5);
else return int(x-0.5);
}
void NhapDinh(ToaDo2D P[])
{
cout<<"\nNhap so dinh da giac:";cin>>n;
for(int i=0;i<n;i++)
{
cout<<"Nhap toa do dinh thu "<<i+1<<" :\n";
cout<<" x = ";cin>>P[i].x;
cout<<" y = ";cin>>P[i].y;
}
P[n]=P[0];
tren.x=100;
#include<graphics.h>
#define LEFT 1
#define RIGHT 2
#define ABOVE 3
#define BELOW 4
struct ToaDo2D
{
int x,y;
};
ToaDo2D h[100],luu[100];
ToaDo2D tren,duoi,giaodiem;
int n,dem;
int round(float x)
{
if(x>0) return int(x+0.5);
else return int(x-0.5);
}
void NhapDinh(ToaDo2D P[])
{
cout<<"\nNhap so dinh da giac:";cin>>n;
for(int i=0;i<n;i++)
{
cout<<"Nhap toa do dinh thu "<<i+1<<" :\n";
cout<<" x = ";cin>>P[i].x;
cout<<" y = ";cin>>P[i].y;
}
P[n]=P[0];
tren.x=100;
tren.y=100;
duoi.x=300;
duoi.y=300;
}
void VeHinh(ToaDo2D P[])
{
line(tren.x,tren.y,duoi.x,tren.y);
line(duoi.x,tren.y,duoi.x,duoi.y);
line(duoi.x,duoi.y,tren.x,duoi.y);
line(tren.x,duoi.y,tren.x,tren.y);
setwritemode(XOR_PUT);
setcolor(14);
for(int i=0;i<n;i++)
line(P[i].x,P[i].y,P[i+1].x,P[i+1].y);
getch();
for(i=0;i<n;i++)
line(P[i].x,P[i].y,P[i+1].x,P[i+1].y);
setwritemode(COPY_PUT);
}
void giao(ToaDo2D p1,ToaDo2D p2,int canh)
{
float k;
switch (canh)
{
case 1://trai
giaodiem.x=tren.x;
k=(float)(p1.y-p2.y)/(p1.x-p2.x);
giaodiem.y=round((tren.x-p1.x)*k +p1.y);
break;
case 2://phai
giaodiem.x=duoi.x;
k=(float)(p1.y-p2.y)/(p1.x-p2.x);
giaodiem.y=round((duoi.x-p1.x)*k +p1.y);
break;
case 3://tren
giaodiem.y=tren.y;
k=(float)(p1.x-p2.x)/(p1.y-p2.y);
giaodiem.x=round((tren.y-p1.y)*k +p1.x);
break;
case 4://duoi
giaodiem.y=duoi.y;
k=(float)(p1.x-p2.x)/(p1.y-p2.y);
giaodiem.x=round((duoi.y-p1.y)*k +p1.x);
break;
}
}
int trong(ToaDo2D P,int canh)
{
int tam = 0;
switch (canh)
{
case 1: if (P.x>tren.x) tam = 1;
break;
case 2: if (P.x<duoi.x) tam =1;
break;
case 3: if (P.y>tren.y) tam = 1;
break;
case 4: if (P.y<duoi.y) tam = 1;
break;
}
return tam;
}
void xencanh(int canh)
{
int truoc=0, dem=0;
if (trong(h[0],canh))
{
luu[dem]=h[0];
truoc=1;
dem++;
}
for(int i=1;i<n;i++)
{
if (truoc)
if (trong(h[i],canh))
{
luu[dem]=h[i];
truoc=1;
dem++;
}
else
{
giao(h[i-1],h[i],canh);
luu[dem]=giaodiem;
truoc=0;
dem++;
}
else
if (trong(h[i],canh))
{
giao(h[i-1],h[i],canh);
luu[dem]=giaodiem;
truoc=1;
dem++;
luu[dem]=h[i];
dem++;
}
}
if(truoc)
if (trong(h[0],canh)) truoc=1;
else
{
giao(h[n-1],h[0],canh);
luu[dem]=giaodiem;
truoc=0;
dem++;
}
else
if (trong(h[0],canh))
{
giao(h[n-1],h[0],canh);
luu[dem]=giaodiem;
truoc=0;
dem++;
}
dem++;
}
}
if(truoc)
if (trong(h[0],canh)) truoc=1;
else
{
giao(h[n-1],h[0],canh);
luu[dem]=giaodiem;
truoc=0;
dem++;
}
else
if (trong(h[0],canh))
{
giao(h[n-1],h[0],canh);
luu[dem]=giaodiem;
truoc=0;
dem++;
}
Int main()
{
NhapDinh(h);
int gd=0,gm;
initgraph(&gd,&gm,"");
VeHinh(h);
xendagiac();
ve(h);
getch();
closegraph;
}
