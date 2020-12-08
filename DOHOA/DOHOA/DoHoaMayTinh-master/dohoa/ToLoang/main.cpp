#include<graphics.h>
#include<iostream>
#include<conio.h>
/*
dinh 1: 200 50
dinh 2: 300 200
dinh 3: 250 250
dinh 4: 30 200
dinh 5: 150 150
dinh 6: 70 100
 nhap toa do diem x: 150
 nhap toa do diem y: 200
*/
using namespace std;

struct ToaDo{
	int x,y;
};
int MauNen;
void Nhap(int &n,int &x, int &y, ToaDo a[]){
	cout<<"Nhap so dinh cua da giac: ";
	cin>>n;
	for(int i=1;i<=n;i++){
		cout<<"\n a["<<i<<"].x= ";
		cin>>a[i].x;
		cout<<"\n a["<<i<<"].y= ";
		cin>>a[i].y;
	}
	cout<<"Nhap diem (x,y) thuoc da giac : \n";
    cout<<"nhap x = "; cin>>x;
    cout<<"nhap y = "; cin>>y;
}
void VeDaGiac(int n, ToaDo a[], int color){
	setcolor(color);
	int i,j;
	for(int i=1;i<=n;i++){
		if(i==n) j=1; else j=i+1;
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
    //delay(1);
}
   int main(){
   	int x,y,n,gd=0,gm;
    ToaDo a[10];
    Nhap(n,x,y,a);
    initgraph(&gd,&gm,"");
    VeDaGiac(n,a,15);
    MauNen=getpixel(x,y);
    ToLoang(x,y,10);
    getch();
    closegraph();
   }



