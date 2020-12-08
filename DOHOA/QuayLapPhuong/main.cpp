#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include"DoHoa3D.h"
ToaDo3D P1,P2,P3,P4,P5,P6,P7,P8,P9,P10;
struct ToaDo { long x, y; };
double Area(ToaDo A, ToaDo B, ToaDo C) 
{
    return abs(B.x*A.y-A.x*B.y+C.x*B.y-B.x*C.y+A.x*C.y-C.x*A.y);
}

void KhoiTaoBien()
{
    D=100;R=15;
    theta=40;phi=20;
    P1.x=0; P1.y=0; P1.z=0;
    P2.x=0; P2.y=1; P2.z=0;
    P3.x=1; P3.y=1; P3.z=0;
    P4.x=1; P4.y=0; P4.z=0;
    P5.x=1; P5.y=0; P5.z=1;
    P6.x=0; P6.y=0; P6.z=1;
    P7.x=0; P7.y=1; P7.z=1;
    P8.x=1; P8.y=1; P8.z=1;
}
void VeLapPhuong()
{
    DiDen(P1); VeDen(P2);
    VeDen(P3); VeDen(P4);
    VeDen(P1); VeDen(P6);
    VeDen(P7); VeDen(P8);
    VeDen(P5); VeDen(P6);
    DiDen(P3); VeDen(P8);
    DiDen(P2); VeDen(P7);
    DiDen(P4); VeDen(P5);
}
void KhoiTaoBienNgoiNha()
{
	D=100;R=15;
    theta=40;phi=20;
    P1.x=0; P1.y=0; P1.z=0;
    P2.x=0; P2.y=1; P2.z=0;
    P3.x=0; P3.y=1; P3.z=1;
    P4.x=0; P4.y=0.5; P4.z=1.5;
    P5.x=0; P5.y=0; P5.z=1;
    P6.x=1; P6.y=0; P6.z=0;
    P7.x=1; P7.y=1; P7.z=0;
    P8.x=1; P8.y=1; P8.z=1;
    P9.x=1; P9.y=0.5; P9.z=1.5;
    P10.x=1; P10.y=0; P10.z=1;
}
void VeNgoiNha()
{
	DiDen(P1); VeDen(P2);
	DiDen(P2); VeDen(P3);
    VeDen(P3); VeDen(P4);
    DiDen(P4); VeDen(P5);
    DiDen(P5); VeDen(P1);
    DiDen(P6); VeDen(P7);
   	DiDen(P7); VeDen(P8);
	DiDen(P8); VeDen(P9);
	DiDen(P9); VeDen(P10);
	DiDen(P10); VeDen(P6);
	DiDen(P1); VeDen(P6);
	DiDen(P2); VeDen(P7);
	DiDen(P3); VeDen(P8);
	DiDen(P4); VeDen(P9);
	DiDen(P5); VeDen(P10);
}
void MinhHoa()
{
    //initwindow(1000, 1000);
    settextstyle(4, 0, 4);
    outtextxy(0, 14, "Le Van Linh");
    
       ToaDo I; I.x = 300; I.y = 300; 
	int color = 2, r = 80; 
//	FillCircle(I, r, color); 
	circle(300, 300, 80);
    
    KhoiTaoBien();
    //KhoiTaoBienNgoiNha();
    KhoiTaoPhepChieu();
    //TrucToaDo();
    VeLapPhuong();
    //VeNgoiNha();
    do
    {
        DieuKhienQuay();
        KhoiTaoPhepChieu();
        cleardevice();
        //TrucToaDo();
        VeLapPhuong();
        //VeNgoiNha();
   }
   while (ch!=27);
}
int main()
{
    project=SongSong;
    ThietLapDoHoa();
    MinhHoa();
}
