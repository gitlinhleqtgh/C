#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<math.h>
using namespace std;
void KhoiTaoDoHoa()
{
	int driver=0,mode;
	initgraph(&driver,&mode,"");
}
struct ToaDo
{
	int x,y;
};
void VeTamGiac(ToaDo A,ToaDo B,ToaDo C)
{
	line(A.x,A.y,B.x,B.y);
	line(B.x,B.y,C.x,C.y);
	line(C.x,C.y,A.x,A.y);
}
int Dtich(ToaDo A,ToaDo B,ToaDo C)
{
  return abs((B.x*A.y-A.x*B.y)+(C.x*B.y-B.x*C.y)+(A.x*C.y-A.y*C.x));
}
int Ktra(ToaDo P,ToaDo A,ToaDo B, ToaDo C)
{
  return Dtich(A,B,C)==Dtich(P,A,B)+Dtich(P,A,C)+Dtich(P,B,C);
}
void Fill(ToaDo A, ToaDo B,ToaDo C)
{
	int xmin=min(min(A.x,B.x),C.x);
	int xmax=max(max(A.x,B.x),C.x);
	int ymin=min(min(A.y,B.y),C.y);
	int ymax=max(max(A.y,B.y),C.y);
//	rectangle(xmin,ymin,xmax,ymax); getch();
	ToaDo P;
	for(P.x=xmin;P.x<=xmax;P.x++)
		for(P.y=ymin;P.y<=ymax;P.y++)
			if(Ktra(P,A,B,C)) putpixel(P.x,P.y,GREEN);
}
main()
{
	KhoiTaoDoHoa();
	setcolor(YELLOW);
	ToaDo A={100,50},B={50,150},C={250,250};
	VeTamGiac(A,B,C);
	Fill(A,B,C);
	getch();
}
