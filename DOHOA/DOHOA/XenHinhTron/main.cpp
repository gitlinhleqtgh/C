#include <graphics.h>
#include <conio.h>
#include<math.h>
#include<bits/stdc++.h>
#define pi 3.1416
#define XTop 25
#define YTop 0
#define Dy 32
#define Dx 575
#define mau1 15
#define mau2 8
#define maumn 7
#define TRUE 1
#define FALSE 0
using namespace std;
int SoDong;
void KhoiTaoDohoa() 
{ 
    int gd=0,gm; 
    initgraph(&gd,&gm,""); 
} 


int round(float x)
{
    if (x>0) return int (x+0.5);
    else return int (x-0.5);
}
struct ToaDo2D
{
 int x,y;
};
void nhap(ToaDo2D  &A,ToaDo2D  &B,ToaDo2D  &tam,int &r){
    cout<<"Nhap xc= ";
    cin>>tam.x;
    cout<<"Nhap yc= ";
    cin>>tam.y;
    cout<<"Nhap ban kinh= ";
    cin>>r;
    cout<<"x1=";
    cin>>A.x;
    cout<<"y1=";
    cin>>A.y;
    cout<<"x2=";
    cin>>B.x;
    cout<<"y2=";
    cin>>B.y;
    
}
double d(ToaDo2D  r,ToaDo2D  M){
    return sqrt((M.x-r.x)*(M.x-r.x)+(M.y-r.y)*(M.y-r.y));
    }
void vehinh(ToaDo2D  A,ToaDo2D  B,ToaDo2D  tam,int r){
    circle(tam.x,tam.y,r);
    setwritemode(XOR_PUT);
    line(A.x,A.y,B.x,B.y);
    getch();
    line(A.x,A.y,B.x,B.y);
}
void trongngoai(ToaDo2D  A,ToaDo2D  B,ToaDo2D  &tam,int r){
    ToaDo2D  P,Q,M;
    P=A;Q=B;
    while(abs(P.x-Q.x)+abs(P.y-Q.y)>2){
        M.x=(P.x+Q.x)/2;
        M.y=(P.y+Q.y)/2;
        if(r>=d(tam,M)) P=M; else Q=M;
    }
    line(A.x,A.y,P.x,P.y);
}


void Clip(ToaDo2D A,ToaDo2D B,ToaDo2D tam,int r){
    ToaDo2D P,Q,M;
    if((r>=d(tam,A))&&(r>=d(tam,B)))
    line(A.x,A.y,B.x,B.y);
    else if((r>=d(tam,A))&&(r<d(tam,B)))
    trongngoai(A,B,tam,r);
    else if((r<d(tam,A)&&(r>=d(tam,B))))
    trongngoai(B,A,tam,r);
    else{
        P=A;Q=B;
        M.x=(P.x+Q.x)/2;
        M.y=(P.y+Q.y)/2;
        while(r<=d(tam,M)){
            if (d(tam,P)>d(tam,Q)) P=M;
            else Q=M;
            M.x=(P.x+Q.x)/2;
            M.y=(P.y+Q.y)/2;
        }
        if(r>=d(tam,M)){
            trongngoai(M,P,tam,r);
            trongngoai(M,Q,tam,r);
        }
    }
}
main()
    {
    KhoiTaoDohoa();
    cleardevice();
    system("cls");
    cout<<"Xen mot doan thang vao mot hinh tron\n";
    ToaDo2D A,B,tam;
    int r;
    nhap(A,B,tam,r);
    setcolor(15);
    vehinh(A,B,tam,r);
    Clip(A,B,tam,r);
    getch();
} 




