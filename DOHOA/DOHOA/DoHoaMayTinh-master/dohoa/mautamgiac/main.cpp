#include <graphics.h>
#include <math.h>
#include <iostream>
#include <string.h>

using namespace std;

struct ToaDo
{
	int x;
	int y;
};

void khoiTaoDohoa()
{
    int gd=0,gm;
    initgraph(&gd,&gm,"");
}

double dienTichTamGiac(ToaDo A, ToaDo B, ToaDo C)
{
	double area = abs((B.x * A.y - A.x * B.y) + (C.x * B.y - B.x * C.y) + (A.x * C.y - C.x * A.y));
	area = area / 2;
	return area;	
}

bool check(ToaDo P, ToaDo A, ToaDo B, ToaDo C)
{
	return dienTichTamGiac(A, B, C) == dienTichTamGiac(P, A, B) + dienTichTamGiac(P, A, C) + dienTichTamGiac(P, B, C);
}

void veTamGiac(ToaDo A, ToaDo B, ToaDo C)
{
	line(A.x, A.y, B.x, B.y);
	line(A.x, A.y, C.x, C.y);
	line(B.x, B.y, C.x, C.y);
}

void Fill(ToaDo A, ToaDo B, ToaDo C)
{
	int xMin = min(min(A.x, B.x), C.x);
	int xMax = max(max(A.x, B.x), C.x);
	int yMin = min(min(A.y, B.y), C.y);	
	int yMax = max(max(A.y, B.y), C.y);
	
	ToaDo P;
	for(P.x = xMin; P.x <= xMax; P.x++)
	{
		for(P.y = yMin; P.y <= yMax; P.y++)
		{
			if(check(P, A, B, C))
			putpixel(P.x, P.y, RED);
		}
	}
}

int main()
{
	ToaDo A = {100, 50};
	ToaDo B = {50, 150};
	ToaDo C = {250, 250};
	
	khoiTaoDohoa();
	setcolor(BLUE);
	veTamGiac(A, B, C);
	Fill(A, B, C);
	getch();
	return 0;
}
