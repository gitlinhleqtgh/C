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

float f1(float x) {
	return (a*x + b) / (c*x + d);
}

void vedothi() {
	int x0, y0,	//goctoado
		x1, y1,	//diem xuat phat
		x2, y2;	//diem ve den
	float x,	//bien chay tu min->max
		  dx,	//buc tang x
		  k;	//he so phong to
	//Dat goc toa do o giua man hinh
	x0 = getmaxx()/2;
	y0 = getmaxy()/2;
	k = 50;
	dx = 0.001;
	//Ve truc toa do
	setcolor(0);
	line(0, y0, x0*2, y0);
	line(x0, 0, x0, y0*2);
	//Ve do thi
	x = -20;
	setcolor(4);
	//Diem xuat phat
	x1 = x0 + round(x * k);
	y1 = y0 - round(f1(x) * k);
	moveto(x1, y1);
	while(x < 20) {
		x = x + dx;
		x2 = x0 + round(x * k);
		y2 = y0 - round(f(x) * k);
		lineto(x2, y2);
	}
}

void vedothi1() {
	int x0, y0,	//goc toa do
		x1, y1,	//diem xuat phat
		x2, y2;	//diem ve den
	float x,	//bien chay tu min->max
		  dx,	//buc tang x
		  k;	//he so phong to
	//Dat goc toa do o giua man hinh
	x0 = getmaxx()/2;
	y0 = getmaxy()/2;
	k = 50;
	dx = 0.001;
	//Ve truc toa do
	setcolor(0);
	line(0, y0, x0*2, y0);
	line(x0, 0, x0, y0*2);
	//Ve do thi
	x = -20;
	setcolor(4);
	//tiem can ngang
	line(0, y0-round(a/c*k), x0*2,y0-round(a/c*k));
	//Diem xuat phat
	x1 = x0 + round(x * k);
	y1 = y0 - round(f1(x) * k);
	moveto(x1, y1);
	while(x < 20) {
		x = x + dx;
		x2 = x0 + round(x * k);
		y2 = y0 - round(f1(x) * k);
		lineto(x2, y2);
	}
}

int main() {
	cout << "Chon ham muon ve do thi.\n";
	cout << "1. ax^2 + bx + c.\n";
	cout << "2. ax^3 + bx^2 + cx + d.\n";
	cout << "3. ax^4 + bx^2 + c.\n";
	cout << "4. (ax + b) / (cx + d).\n";
	cout << "Nhap lua chon: ";
	int luachon;
	cin >> luachon;
	switch (luachon) {
		case 1: {
			cout << "Nhap a: "; cin >> c;
			cout << "Nhap b: "; cin >> d;
			cout << "Nhap c: "; cin >> e;
			initwindow(1080, 720);
			setbkcolor(15); //mau nen
			cleardevice();  //xoa man hinh
			vedothi();
			getch();
			break;
		}
		case 2: {
			cout << "Nhap a: "; cin >> b;
			cout << "Nhap b: "; cin >> c;
			cout << "Nhap c: "; cin >> d;
			cout << "Nhap d: "; cin >> e;
			initwindow(1080, 720);
			setbkcolor(15); //mau nen
			cleardevice();  //xoa man hinh
			vedothi();
			getch();
			break;
		}
		case 3: {
			cout << "Nhap a: "; cin >> a;
			cout << "Nhap b: "; cin >> c;
			cout << "Nhap c: "; cin >> e;
			initwindow(1080, 720);
			setbkcolor(15); //mau nen
			cleardevice();  //xoa man hinh
			vedothi();
			getch();
			break;
		}
		case 4: {
			cout << "Nhap a: "; cin >> a;
			cout << "Nhap b: "; cin >> b;
			cout << "Nhap c: "; cin >> c;
			cout << "Nhap d: "; cin >> d;
			initwindow(1080, 720);
			setbkcolor(15); //mau nen
			cleardevice();  //xoa man hinh
			vedothi1();
			getch();
			break;
		}
	}
} 
