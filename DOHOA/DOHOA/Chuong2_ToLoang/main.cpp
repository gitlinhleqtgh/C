#include <graphics.h>
#include <conio.h>
#include <math.h>
#include <bits/stdc++.h>

using namespace std;

struct ToaDo2D {
	int x, y;
};

double STamGiac(ToaDo2D A, ToaDo2D B, ToaDo2D C) {
	return abs(B.x*A.y-A.x*B.y+C.x*B.y-B.x*C.y+A.x*C.y-C.x*A.y);
}

double DienTich(ToaDo2D P[], int n) {
	int dientich = 0;
	for(int i = 1; i < n - 1; i++) {
		dientich += STamGiac(P[0], P[i], P[i+1]);
	}
	return dientich;
}

bool KiemTraA(int x, int y, ToaDo2D P[], int n) {
	ToaDo2D A;
	A.x = x;
	A.y = y;
	double tongDienTich = STamGiac(A, P[0], P[n-1]);
	for(int i = 0; i < n - 1; i++) {
		tongDienTich += STamGiac(A, P[i], P[i+1]);
	}
	return tongDienTich == DienTich(P, n);
}

void FillRec(int x1, int y1, int x2, int y2, int color) {
	int xmin, xmax, ymin, ymax;
	if(x1 < x2) {
		xmin = x1;
		xmax = x2;
	}
	else {
		xmin = x2;
		xmax = x1;
	}
	if(y1 < y2) {
		ymin = y1;
		ymax = y2;
	}
	else {
		ymin = y2;
		ymax = y1;
	}
	for(int i = ymin; i <= ymax; i++) {
		for(int j = xmin; j <= xmax; j++) {
			putpixel(j, i, color);
		}
	}
}

bool checkEllipse(int x, int y, int a, int b) {
	return ((float)(x*x)/(a*a) + (float)(y*y)/(b*b)) <= 1;
}

void FillEllipse(int x, int y, int Rx, int Ry, int color) {
	int xmin = x - Rx,
		xmax = x + Rx,
		ymin = y - Ry,
		ymax = y + Ry;
	for(int i = xmin; i < xmax; i++) {
		for(int j = ymin; j < ymax; j++) {
			if(checkEllipse(i - x, y - j, Rx, Ry))
				putpixel(i, j, color);
		}
	}
	
}

bool CheckCircle(int x, int y, int r, ToaDo2D P) {
	return (P.x-x)*(P.x-x) + (P.y-y)*(P.y-y) < r*r;
}

void Donut(int x, int y, int Rmin, int Rmax, int color) {
	int xmin = x-Rmax;
	int xmax = x+Rmax;
	int ymin = y-Rmax;
	int ymax = y+Rmax;
	ToaDo2D P;
	for(P.x = xmin; P.x <= xmax; P.x++) {
		for(P.y = ymin; P.y <= ymax; P.y++) {
			if(CheckCircle(x, y, Rmax, P) && !CheckCircle(x, y, Rmin, P))
				putpixel(P.x, P.y, color);
		}
	}
}

int main() {
	
	ToaDo2D A;
	A.x = 10;
	A.y = 10;
	
	ToaDo2D B;
	B.x = 10;
	B.y = 20;
	
	ToaDo2D C;
	C.x = 20;
	C.y = 20;
	
	ToaDo2D D;
	D.x = 20;
	D.y = 10;
	
	ToaDo2D P[4] = {A, B, C, D};
	
	ToaDo2D E;
	E.x = 20;
	E.y = 20;
	
	initwindow(800, 500);
	FillEllipse(100, 100, 50, 75, 1);
	ellipse(100, 100, 0, 0, 50, 75);
	
	FillRec(50, 300, 200, 400, 2);
	rectangle(50, 300, 200, 400);
	
	Donut(300, 100, 50, 75, 3);
	circle(300, 100, 50);
	circle(300, 100, 75);
	
	setcolor(4);
	sector(400, 400, 10, 111, 200, 150);
	setcolor(15);
	ellipse(400, 400, 10, 111, 200, 150);
	
	getch();
}

