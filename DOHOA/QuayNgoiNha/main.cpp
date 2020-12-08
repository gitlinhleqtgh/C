#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
#include"DOHOA3D.H"
struct Wireframe
{
int sodinh,socanh;
ToaDo3D dinh[50];
int canh[100][2];
};
//-----------------------------------------
void KhoiTaoBien()
{
D=200;R=5;
theta=40;phi=20;
project=SongSong;
}
void DocFile(Wireframe &a,char *FileName)
{
FILE *f;
f=fopen(FileName,"rt");
fscanf(f,"%d",&a.sodinh);
fscanf(f,"%d",&a.socanh);
for(int i=1;i<=a.sodinh;i++)
{
fscanf(f,"%f",&a.dinh[i].x);
fscanf(f,"%f",&a.dinh[i].y);
fscanf(f,"%f",&a.dinh[i].z);
}
for(int i=1;i<=a.socanh;i++)
{
fscanf(f,"%d",&a.canh[i][0]);
fscanf(f,"%d",&a.canh[i][1]);
}
fclose(f);
}



void VeWireframe(Wireframe wf)
{
ToaDo3D d1,d2;
for(int i=1;i<=wf.socanh;i++)
{
d1=wf.dinh[wf.canh[i][0]];
d2=wf.dinh[wf.canh[i][1]];
DiDen(d1);
VeDen(d2);
}

}
main()
{
Wireframe a;
FILE *f;
DocFile(a,"House.txt");
KhoiTaoBien();
ThietLapDoHoa();
do
{
KhoiTaoPhepChieu();
VeWireframe(a);
DieuKhienQuay();
}
while (ch!=27);
closegraph();
}
