#include <graphics.h>
#include <conio.h>
#include<iostream>
#include<math.h>
#define DELAY 10
#include<string.h>
int color = 2;
void khoiTaoDohoa()
{
    int gd=0,gm;
    initgraph(&gd,&gm,"d:\\tc\\bgi");
}
void Ten()
{
	
	cleardevice();
	outtext("Tran Duy Tien - Lop 16CNTT3");
	getch();
}
// in ra doan thang
void Bresenham(int x1, int y1, int x2, int y2){
    int Dx = abs(x2 - x1);
    int Dy = abs(y2 - y1);
    int p = 2*Dy - Dx;
    int c1 = 2*Dy;
    int c2 = 2*(Dy-Dx);
    int x = x1;
    int y = y1;
    int x_unit = 1, y_unit = 1;
    putpixel(x,y,color);
    while(x != x2){
        delay(DELAY);
        if (p<0) p += c1;
        else{
            p += c2;
            y += y_unit;
        }
        x += x_unit;
        putpixel(x, y, color);
    }
}
// in tam giac
//void veTamGiac(ToaDo A, ToaDo B, ToaDo C)
//{
//	line(A.x, A.y, B.x, B.y);
//	line(A.x, A.y, C.x, C.y);
//	line(B.x, B.y, C.x, C.y);
//}
//void Fill(ToaDo A, ToaDo B, ToaDo C)
//{
//	int xMin = min(min(A.x, B.x), C.x);
//	int xMax = max(max(A.x, B.x), C.x);
//	int yMin = min(min(A.y, B.y), C.y);	
//	int yMax = max(max(A.y, B.y), C.y);
//	
//	ToaDo P;
//	for(P.x = xMin; P.x <= xMax; P.x++)
//	{
//		for(P.y = yMin; P.y <= yMax; P.y++)
//		{
//			if(check(P, A, B, C))
//			putpixel(P.x, P.y, RED);
//		}
//	}
//}
// ve duong tron
void ve8diem(int x0,int y0,int x, int y, int color)
{
  putpixel( x0 + x , y0 + y ,color);
  putpixel( x0 - x , y0 + y ,color);
  putpixel( x0 + x , y0 - y ,color);
  putpixel( x0 - x , y0 - y ,color);
  putpixel( x0 + y , y0 + x ,color);
  putpixel( x0 - y , y0 + x ,color);
  putpixel( x0 + y , y0 - x ,color);
  putpixel( x0 - y , y0 - x ,color);
}
void circle(int x0,int y0,int r)
{
  int x=0;int y=r;
  int p=3-2*r;
  while (x<=y)
  {
   ve8diem(x0,y0,x,y,15);
   if(p<0) p=p+4*x+6;
   else
       {
            p=p+4*(x-y)+10;
            y=y-1;
       }
   x=x+1;
  }
}

int main(){
//	Ten();
	int x1,y1,x2,y2;
//    int gd,gm;
//    initgraph(&gd,&gm,"D:\\TC\\BGI");
//  setbkcolor(4);
// tam giac
	outtext(" Tran Duy Tien - Lop 16CNTT3 ");
//	ToaDo A = {100, 50};
//	ToaDo B = {50, 150};
//	ToaDo C = {250, 250};
//	veTamGiac(A,B,C);
	//Fill(A,B,C);
	
	khoiTaoDohoa();
    Bresenham(50,150, 300, 200);
    delay(9000);
	return 0;
}
