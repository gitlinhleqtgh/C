#include <bits/stdc++.h>
#include <graphics.h>
#include<conio.h>

using namespace std;

int mauvien = 4;

void toloang(int x, int y, int color) {
    if(getpixel(x, y) != mauvien && getpixel(x, y) != color) {
        putpixel(x, y, color);
        toloang(x+1, y, color);
        toloang(x-1, y, color);
        toloang(x, y+1, color);
        toloang(x, y-1, color);
    }
}

void vehinh(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4) {
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x4, y4);
    line(x4, y4, x1, y1);
}

struct ToaDo { long x, y; };
double Area(ToaDo A, ToaDo B, ToaDo C) 
{
    return abs(B.x*A.y-A.x*B.y+C.x*B.y-B.x*C.y+A.x*C.y-C.x*A.y);
}
bool Check1(ToaDo I, int r, ToaDo P)
{ 
    return (P.x-I.x)*(P.x-I.x) + (P.y-I.y)*(P.y-I.y) < r*r; 
}
bool Check(ToaDo P, ToaDo A, ToaDo B, ToaDo C) 
{
    return Area(A, B, C) == (Area(A, B, P) + Area(A, C, P) + Area(C, B, P));
} 
void printRectangle(ToaDo A, ToaDo B, ToaDo C) 
{
    line(A.x, A.y, B.x, B.y);
	line(C.x, C.y, B.x, B.y);
	line(A.x, A.y, C.x, C.y); } 
void FillRectangle(ToaDo A, ToaDo B, ToaDo C,int color) 
{
    int xmin=A.x; 
	if(xmin > B.x) xmin=B.x; 
	if(xmin > C.x) xmin=C.x; 
	int xmax=A.x; 
	if(xmax < B.x) xmax=B.x;
	if(xmax < C.x) xmax=C.x;
	int ymin=A.y; 
	if(ymin > B.y) ymin=B.y; 
	if(ymin > C.y) ymin=C.y; 
	int ymax=A.y; 
	if(ymax < B.y) ymax=B.y; 
	if(ymax < C.y) ymax=C.y;
	ToaDo P;
	for(P.x = xmin; P.x <= xmax; P.x++) { 
		for(P.y = ymin; P.y <= ymax; P.y++) {
		    if(Check(P, A, B, C)) 
			{ 
			    putpixel(P.x, P.y, color);
			}
		}
	}
} 
void FillCircle(ToaDo I, int r, int color) 
{ 
    int xmin = I.x-r; 
	int xmax = I.x+r; 
	int ymin = I.y-r;
	int ymax = I.y+r;
	ToaDo P;
	for(P.x = xmin; P.x <= xmax; P.x++)
	{ 
	    for(P.y = ymin; P.y <= ymax; P.y++) {
	        if(Check1(I, r, P))
	        putpixel(P.x, P.y, color);
		}
	}
} 


int main() {
    int step = 10;
    int x1 = 100, y1 = 100, x2 = 300, y2 = 100, x3 = 300, y3 = 300, x4 = 100, y4 = 300;
    initwindow(1000, 1000);
    settextstyle(4, 0, 4);
    outtextxy(0, 14, "Le Van Linh");
    getch();
    setcolor(mauvien);
    vehinh(x1, y1, x2, y2, x3, y3, x4, y4);
    getch();
    char ch;
    getch();
    
    ToaDo I; I.x = 300; I.y = 300; 
	int color = 2, r = 80; 
//	FillCircle(I, r, color); 
	circle(300, 300, 80);
    getch();
     toloang(299, 299, 14);
    
     int x10pt = 0.1 * x1;
    int y10pt = 0.1 * y1;
    vehinh(x1, y1, x2, y2, x3, y3, x4, y4);
   // vehinh(x0,y0);
    do {
        ch = getch();
        switch(ch) {
            case 80: {
                //vehinh(x0,y0);
                vehinh(x1, y1, x2, y2, x3, y3, x4, y4);
               // x1 = x1 - x10pt;
               // y1 = y1 - y10pt;
                x2 = x2 - x10pt;
                //y2 = y2 - y10pt;
                x3 = x3 - x10pt;
                y3 = y3 - y10pt;
               // x4 = x4 - x10pt;
                y4 = y4 - y10pt;
                
                //vehinh(x0,y0);
                  cleardevice();
                vehinh(x1, y1, x2, y2, x3, y3, x4, y4);
                circle(300, 300, 80);
                 toloang(200, 200, 14);
                break;
            }
            case 72: {
                //vehinh(x0,y0);
                vehinh(x1, y1, x2, y2, x3, y3, x4, y4);
                //x1 = x1 + x10pt;
                //y1 = y1 + y10pt;
                x2 = x2 + x10pt;
               // y2 = y2 + y10pt;
                x3 = x3 + x10pt;
                y3 = y3 + y10pt;
                //x4 = x4 + x10pt;
                y4 = y4 + y10pt;
                
                cleardevice();
                vehinh(x1, y1, x2, y2, x3, y3, x4, y4);
                circle(300, 300, 80);
                 toloang(299, 299, 14);
                //vehinh(x0,y0);
                break;
            }
        }
    } while(ch!=27);
    getch();
    
    
    
    
    
    
    
    
//    setwritemode(XOR_PUT);
//    vehinh(x1, y1, x2, y2, x3, y3, x4, y4);
//    
//    do {
//        ch = getch();
//        switch(ch) {
//            case 72: {
//                vehinh(x1, y1, x2, y2, x3, y3, x4, y4);
//                y1 -= step;
//                y2 -= step;
//                y3 -= step;
//                y4 -= step;
//                vehinh(x1, y1, x2, y2, x3, y3, x4, y4);
//                break;
//            }
//            
//            case 75: {
//                vehinh(x1, y1, x2, y2, x3, y3, x4, y4);
//                x1 -= step;
//                x2 -= step;
//                x3 -= step;
//                x4 -= step;
//                vehinh(x1, y1, x2, y2, x3, y3, x4, y4);
//                break;
//            }
//            
//            case 77: {
//                vehinh(x1, y1, x2, y2, x3, y3, x4, y4);
//                x1 += step;
//                x2 += step;
//                x3 += step;
//                x4 += step;
//                vehinh(x1, y1, x2, y2, x3, y3, x4, y4);
//                break;
//            }
//            
//            case 80: {
//                vehinh(x1, y1, x2, y2, x3, y3, x4, y4);
//                y1 += step;
//                y2 += step;
//                y3 += step;
//                y4 += step;
//                vehinh(x1, y1, x2, y2, x3, y3, x4, y4);
//                break;
//            }
//        }
//    } while(ch != 27);
//    
}

