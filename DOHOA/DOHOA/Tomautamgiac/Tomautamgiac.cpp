#include<graphics.h>
#include<conio.h>
#include<math.h>
using namespace std;
void thietlapdohoa()
{
    int gd=0,gm;
    initgraph(&gd,&gm,"");
}
struct ToaDo
{
    long x, y;
};
long DTich(ToaDo A ,ToaDo B ,ToaDo C )
{
    return abs(B.x*A.y-A.x*B.y+C.x*B.y-B.x*C.y+A.x*C.y-C.x*A.y);
}
bool KTra(ToaDo P,ToaDo A,ToaDo B,ToaDo C)
{
	return DTich(A,B,C)==DTich(P,B,C)+DTich(P,A,B)+DTich(P,C,A);
}
void VeTamGiac(ToaDo A ,ToaDo B ,ToaDo C )
{
    line(A.x, A.y,B.x, B.y);
    line(C.x, C.y,B.x, B.y);
    line(A.x, A.y,C.x, C.y);
}
void Fill(ToaDo A ,ToaDo B ,ToaDo C, int color )
{
    //tim hinh chu nhat W bao da giac s
    int xmin = A.x; 
    if(xmin>B.x) xmin = B.x;
    if(xmin>C.x) xmin = C.x;
    
    int xmax = A.x;
    if(xmax<B.x) xmax = B.x;
    if(xmax<C.x) xmax = C.x;
    
    int ymin = A.y;
    if(ymin>B.y) ymin = B.y;
    if(ymin>C.y) ymin = C.y; 
    
    int ymax = A.y;
    if(ymax<B.y) ymax = B.y;
    if(ymax<C.y) ymax = C.y;
    
    // to mau
    ToaDo P;
    for(P.x=xmin;P.x<=xmax;P.x++)
     for(P.y=ymin;P.y<=ymax;P.y++)
	       if(KTra(P,A,B,C)) putpixel(P.x,P.y,color);
}

int main()
{
    thietlapdohoa();
    ToaDo A,B,C;
    int color=14; // mau vang
    A.x=50; A.y=70;
    B.x=300; B.y=100;
    C.x=160; C.y=200;
    VeTamGiac(A,B,C);
    getch();
    Fill(A,B,C,color);
    getch();
}
