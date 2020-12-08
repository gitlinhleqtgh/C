#include <graphics.h>
#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include<queue>
using namespace std;

int MauNen;
struct ToaDo
{
    int x;
    int y;
};

void KhoiTaoDoHoa() {
	int driver = 0, mode = 0;
	initgraph(&driver, &mode, "");
}
void ten(){
	settextstyle(1,0,1);
	setcolor(14);
	outtext("Tran Duy Tien - Lop 16cntt3");
}
int main(){
	KhoiTaoDoHoa();
	ten();
	getch();
	closegraph();
}
