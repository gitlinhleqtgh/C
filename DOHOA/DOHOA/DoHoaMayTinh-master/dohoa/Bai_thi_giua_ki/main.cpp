#include<graphics.h>
#include<iostream>
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
void vehinhchunhat(ToaDo t,ToaDo b)
{
	line(t.x,t.y,t.x,b.y);
	line(t.x,b.y,b.x,b.y);
	line(b.x,b.y,b.x,t.y);
	line(b.x,t.y,t.x,t.y);	
}
void vehinhthoi(ToaDo a,ToaDo b,ToaDo c,ToaDo d)
{
	line(a.x,a.y,b.x,b.y);
	line(b.x,b.y,c.x,c.y);
	line(c.x,c.y,d.x,d.y);
	line(d.x,d.y,a.x,a.y);
}
int DienTichTG(ToaDo a,ToaDo b,ToaDo c,ToaDo d)
{
	return abs((b.x*a.y-a.x*b.y)+(c.x*b.y-b.x*c.y)+(d.x*c.y-c.x*d.y)+(a.x*d.y-d.x*a.y));
}
int Dtich(ToaDo a,ToaDo b,ToaDo c)
{
  return abs((b.x*a.y-a.x*b.y)+(c.x*b.y-b.x*c.y)+(a.x*c.y-a.y*c.x));
}
int Ktratg(ToaDo p,ToaDo a,ToaDo b, ToaDo c,ToaDo d)
{
  return (DienTichTG(a,b,c,d)==Dtich(p,a,b)+Dtich(p,b,c)+Dtich(p,c,d)+Dtich(p,d,a));
}
void FillTG(ToaDo a,ToaDo b,ToaDo c,ToaDo d)
{
	int xmin=min(min(min(a.x,b.x),c.x),d.x);
	int xmax=max(max(max(a.x,b.x),c.x),d.x);
	int ymin=min(min(min(a.y,b.y),c.y),d.y);
	int ymax=max(max(max(a.y,b.y),c.y),d.y);
///	rectangle(xmin,ymin,xmax,ymax); getch();
	ToaDo p;
	for(p.x=xmin;p.x<=xmax;p.x++)
		for(p.y=ymin;p.y<=ymax;p.y++)
			if(Ktratg(p,a,b,c,d)) putpixel(p.x,p.y,RED);
}
int Ktratron(ToaDo p,ToaDo t,int r)
{
	int k;
	k=pow((p.x-t.x),2)+pow((p.y-t.y),2);
	int r2;
	r2=pow(r,2);
	if(k<=r2) return 1;
	else return 0;
}
void Fill(ToaDo t,int r,ToaDo a,ToaDo b,ToaDo c,ToaDo d)
{
	int Xmin=t.x-r;
	int Xmax=t.x+r;
	int Ymin=t.y-r;
	int Ymax=t.y+r;
	ToaDo p;
	for(p.x=Xmin;p.x<=Xmax;p.x++)
	{
		for(p.y=Ymin;p.y<=Ymax;p.y++)
		{
			if((Ktratron(p,t,r)==1)&&(Ktratg(p,a,b,c,d))) putpixel(p.x,p.y,BLUE); 
		}
	}
}
main()
{
	KhoiTaoDoHoa();
	setcolor(14);
	outtextxy(10,10,"Ho Ten");
	ToaDo tr={60,170},t={100,100},t1={100,200},b={250,200},a={250,100},c={150,50},d={300,50},e={300,150};
	int r=70;
	vehinhthoi(t,t1,b,a);
	vehinhthoi(t,c,d,a);
	vehinhthoi(d,e,b,a);
	FillTG(d,e,b,a);
	setcolor(RED);
	circle(tr.x,tr.y,r);
	Fill(tr,r,t,t1,b,a);
	getch();
}
