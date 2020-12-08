#include <graphics.h>
#include <math.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
using namespace std;
void KhoiTaoDoHoa() {
	int driver = 0, mode = 0;
	initgraph(&driver, &mode, "");
}

//void VeDaGiac(int n,ToaDo a[],int color)
//{
//    setcolor(color);
//    for (int i=1; i<=n; i++)
//    {
//        int j;
//        if (i==n) j=1;
//        else j=i+1;
//        line(a[i].x,a[i].y,a[j].x,a[j].y);// ve duong thang
//    }
//}
int main(){
	KhoiTaoDoHoa(); // ham khoi tao do hoa
	
	settextstyle(1,0,1);
	setcolor(14);
	outtext("Tran Duy Tien - Lop 16cntt3");
	
	line(50, 100, 200, 350);// ve duong thang
	getch();
	closegraph();
}

