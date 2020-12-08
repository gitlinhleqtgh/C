#include <conio.h>
#include <graphics.h>
#include <bits/stdc++.h>

using namespace std;

float a = 0, b = 0, c = 0, d = 0, e = 0;

int round(float x) {
	if(x > 0)
		return x+0.5;
	else
		return x-0.5;
}

float f(float x) {
	return (a*x*x*x*x+b*x*x*x+c*x*x+d*x+e);
}
float f2(float x)
{
 return(a*x*x+b*x+c)/(d*x+e);
}
void vedothi() {
	int x0, y0,	x1, y1,	x2, y2;
	float x,  dx,  k;	
	x0 = getmaxx()/2;
	y0 = getmaxy()/2;
	k = 50;
	dx = 0.001;
	setcolor(0);
	line(0, y0, x0*2, y0);
	line(x0, 0, x0, y0*2);
	x = -20;
	setcolor(4);
	x1 = x0 + round(x * k);
	y1 = y0 - round(f2(x) * k);
	moveto(x1, y1);
	while(x < 20) {
		x = x + dx;
		x2 = x0 + round(x * k);
		y2 = y0 - round(f(x) * k);
		lineto(x2, y2);
	}
}

void vedothi1() {
	int x0, y0,	x1, y1,	x2, y2;	
	float x, dx, k;	
	x0 = getmaxx()/2;
	y0 = getmaxy()/2;
	k = 50;
	dx = 0.001;
	setcolor(0);
	line(0, y0, x0*2, y0);
	line(x0, 0, x0, y0*2);
	x = -20;
	setcolor(4);
	line(0, y0-round(a/c*k), x0*2,y0-round(a/c*k));
	x1 = x0 + round(x * k);
	y1 = y0 - round(f2(x) * k);
	moveto(x1, y1);
	while(x < 20) {
		x = x + dx;
		x2 = x0 + round(x * k);
		y2 = y0 - round(f2(x) * k);
		lineto(x2, y2);
	}
}

int main() {
	cout << "Chon ham muon ve do thi" << endl;
	cout << "1. ax^2 + bx + c" << endl;
	cout << "2. ax^3 + bx^2 + cx + d" << endl;
	cout << "3. ax^4 + bx^2 + c" << endl;
	cout << "4. (bx + c) / (dx + e)" << endl;
	cout << "5. (ax^2 + bx + c) / (dx + e)" << endl;
	cout << "Nhap lua chon: " << endl;
	int option;
	cin >> option;
	switch (option) {
		case 1: {
			cout << "Do thi ham bac 2 (ax^2 + bx + c)" << endl;
			cout << "Nhap a: "; cin >> c;
			cout << "Nhap b: "; cin >> d;
			cout << "Nhap c: "; cin >> e;
			initwindow(1080, 720);
			setbkcolor(15); 
			cleardevice();  
			vedothi();
			getch();
			break;
		}
		case 2: {
			cout << "Do thi ham bac 3 (ax^3 + bx^2 + cx + d)" << endl;
			cout << "Nhap a: "; cin >> b;
			cout << "Nhap b: "; cin >> c;
			cout << "Nhap c: "; cin >> d;
			cout << "Nhap d: "; cin >> e;
			initwindow(1080, 720);
			setbkcolor(15); 
			cleardevice();  
			vedothi();
			getch();
			break;
		}
		case 3: {
			cout << "Do thi ham bac 4 (ax^4 + bx^2 + c)" << endl;
			cout << "Nhap a: "; cin >> a;
			cout << "Nhap b: "; cin >> c;
			cout << "Nhap c: "; cin >> e;
			initwindow(1080, 720);
			setbkcolor(15); 
			cleardevice();  
			vedothi();
			getch();
			break;
		}
		case 4: {
			cout << "Do thi ham phan thuc (bx + c) / (dx + e)" << endl;
			cout << "Nhap b: "; cin >> b;
			cout << "Nhap c: "; cin >> c;
			cout << "Nhap d: "; cin >> d;
			cout << "Nhap e: "; cin >> e;
			initwindow(1080, 720);
			setbkcolor(15); 
			cleardevice();  
			vedothi1();
			getch();
			break;
		}
		case 5: {
			cout << "Do thi ham phan thuc (ax^2 + bx + c) / (dx + e)" << endl;
			cout << "Nhap a: "; cin >> a;
			cout << "Nhap b: "; cin >> b;
			cout << "Nhap c: "; cin >> c;
			cout << "Nhap d: "; cin >> d;
			cout << "Nhap e: "; cin >> e;
			initwindow(1080, 720);
			setbkcolor(15); 
			cleardevice();  
			vedothi1();
			getch();
			break;
		}
	}
} 

