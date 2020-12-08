#include<graphics.h>
 #include<conio.h>
  #include<bits/stdc++.h>
   using namespace std; 
   struct ToaDo { long x, y; };
    double Area(ToaDo A, ToaDo B, ToaDo C) 
	{ return abs(B.x*A.y-A.x*B.y+C.x*B.y-B.x*C.y+A.x*C.y-C.x*A.y); }
	 bool Check1(ToaDo I, int r, ToaDo P)
	  { return (P.x-I.x)*(P.x-I.x) + (P.y-I.y)*(P.y-I.y) < r*r; }
	   bool Check(ToaDo P, ToaDo A, ToaDo B, ToaDo C) 
	   { return Area(A, B, C) == (Area(A, B, P) + Area(A, C, P) + Area(C, B, P)); } 
	   void printRectangle(ToaDo A, ToaDo B, ToaDo C) 
	   { line(A.x, A.y, B.x, B.y); line(C.x, C.y, B.x, B.y); line(A.x, A.y, C.x, C.y); } 
	   void FillRectangle(ToaDo A, ToaDo B, ToaDo C,int color) 
	   { int xmin=A.x; 
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
		  ToaDo P; for(P.x = xmin; P.x <= xmax; P.x++) { 
		   for(P.y = ymin; P.y <= ymax; P.y++) {
		    if(Check(P, A, B, C)) { putpixel(P.x, P.y, color); } } } } 
			void FillCircle(ToaDo I, int r, int color) 
			{ int xmin = I.x-r; 
			int xmax = I.x+r; 
			int ymin = I.y-r;
			 int ymax = I.y+r;
			  ToaDo P;
			   for(P.x = xmin; P.x <= xmax; P.x++)
			    { for(P.y = ymin; P.y <= ymax; P.y++) {
				 if(Check1(I, r, P)) putpixel(P.x, P.y, color); } } } 
				 int main() { initwindow(500, 500); 
				 ToaDo I; I.x = 100; I.y = 100; 
				 int color = 2, r = 80; 
				 FillCircle(I, r, color); 
				 circle(100, 100, 80);
				  getch();
				   return 0; }
