#ifndef DoHoa3D_h
#define DoHoa3D_h
#include<math.h>
#define IncAng 5
struct ToaDo3D
{
float x,y,z;
};
struct ToaDo2D
{
int x,y;
};
enum PhepChieu{PhoiCanh,SongSong};
float R,D,theta,phi;
float temp1,temp2,temp3,temp4;
float temp5,temp6,temp7,temp8 ;
char ch;
ToaDo2D PC,PE;
ToaDo3D Obs;
PhepChieu project;
float Xproj,Yproj;
void ThietLapDoHoa()
{
int gd=0,gm;
initgraph(&gd,&gm,"D:\\TC\\BGI");
}
int round(float x)
{
if(x>0) return int(x+0.5);
else return int(x-0.5);
}
void KhoiTaoPhepChieu()
{
float th,ph;
th = M_PI*theta/180;
ph = M_PI*phi/180;
temp1 = sin(th);
temp2 = sin(ph);
temp3 = cos(th);
temp4 = cos(ph);
temp5 = temp3*temp2;
temp6 = temp1*temp2;
temp7 = temp3*temp4;
temp8 = temp1*temp4;
PC.x = getmaxx()/2;
PC.y = getmaxy()/2;
}
void Chieu(ToaDo3D P)
{
Obs.x = -P.x*temp1 + P.y*temp3;
Obs.y = -P.x*temp5 - P.y*temp6 + P.z*temp4;
if( project== PhoiCanh)
{
Obs.z =-P.x*temp7 - P.y*temp8 - P.z*temp2 + R;
Xproj = D*Obs.x/Obs.z;
Yproj = D*Obs.y/Obs.z;
}
else
{
Xproj = D*Obs.x;
Yproj = D*Obs.y;
}
}
void VeDen(ToaDo3D P)
{
Chieu(P);
PE.x = PC.x + round(Xproj);
PE.y = PC.y - round(Yproj);
lineto (PE.x,PE.y);
}
void DiDen(ToaDo3D P)
{
Chieu(P);
PE.x = PC.x + round(Xproj);
PE.y = PC.y - round(Yproj);
moveto (PE.x,PE.y);
}
void TrucToaDo()
{
ToaDo3D OO,XX,YY,ZZ;
setcolor(LIGHTRED);
OO.x=0; OO.y=0; OO.z=0;
XX.x=2; XX.y=0; XX.z=0;
YY.x=0; YY.y=2; YY.z=0;
ZZ.x=0; ZZ.y=0; ZZ.z=2;
DiDen(OO);VeDen(XX);
outtextxy(PE.x+2,PE.y,"X");
DiDen(OO);VeDen(YY);
outtextxy(PE.x+2,PE.y,"Y");
DiDen(OO);VeDen(ZZ);
outtextxy(PE.x+2,PE.y,"Z");
}
void DieuKhienQuay()
{
ch=getch();
if(ch==0) ch=getch();
cleardevice();
switch(ch)
{
case 75: theta = theta + IncAng;
break;
case 77: theta = theta - IncAng;
break;
case 72: phi = phi + IncAng;
break;
case 80: phi = phi - IncAng;
break;
}
}
#endif
