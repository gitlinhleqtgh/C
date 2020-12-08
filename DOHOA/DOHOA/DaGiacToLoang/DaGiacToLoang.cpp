#include<conio.h>
#include<graphics.h>
#include<iostream>
#include <math.h>
#include<stack>
#pragma GCC diagnostic ignored "-Wwrite-strings"
using namespace std;
struct toado
{
    int x,y;
};

toado A[100];
int n,mauvien = 4;
//--------------------------------
void Nhap()
{
    cout<<"Nhap vao so dinh cua da giac:";
    cin>>n;
    for (int i=0;i<n;++i)
    {
      cout<<"\nA["<<i+1<<"].x="; cin>>A[i].x;
      cout<<"\nA["<<i+1<<"].y="; cin>>A[i].y;
    }

}
//--------------------------------
void Vedagiac(toado A[],int n,int color)
{
    int i,j;
    setcolor(color);
    for(i=0;i<n;++i)
    {
       if (i==n-1) j=0;
       else j=i+1;
       line(A[i].x,A[i].y,A[j].x,A[j].y);
    }
}


void Toloang(int x,int y,int color)
{
    stack<toado> S;
    toado P;
    P.x = x; P.y = y;
    S.push(P);
    while(!S.empty())
    {
       P = S.top();
       S.pop();
       if (getpixel(P.x,P.y)!= mauvien && getpixel(P.x,P.y)!= color)
       {
       	   putpixel(P.x,P.y,color);
           toado P1,P2,P3,P4;
           P1.x = P.x+1; P1.y = P.y;
           S.push(P1);
           P2.x = P.x-1; P2.y = P.y;
           S.push(P2);
           P3.x = P.x; P3.y = P.y+1;
           S.push(P3);
           P4.x = P.x; P4.y = P.y-1;
           S.push(P4);
        }
   }
}
 
main()
{
    Nhap();
    int gd= DETECT, gm;
    initgraph(&gd,&gm,"");
    Vedagiac(A,n,mauvien);
    getch();
    Toloang(10,10,14);
    getch();
}
