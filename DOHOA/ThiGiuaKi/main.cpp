#include <bits/stdc++.h>
#include <graphics.h>

 

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

 

int main() {
    int step = 10;
    int x1 = 100, y1 = 100, x2 = 300, y2 = 100, x3 = 550, y3 = 300, x4 = 100, y4 = 300;
    initwindow(1000, 1000);
    settextstyle(4, 0, 4);
    outtextxy(0, 14, "Le Van Linh");
    getch();
    setcolor(mauvien);
    vehinh(x1, y1, x2, y2, x3, y3, x4, y4);
    getch();
    toloang(101, 101, 14);
    char ch;
    getch();
    setwritemode(XOR_PUT);
    vehinh(x1, y1, x2, y2, x3, y3, x4, y4);
    do {
        ch = getch();
        switch(ch) {
            case 72: {
                vehinh(x1, y1, x2, y2, x3, y3, x4, y4);
                y1 -= step;
                y2 -= step;
                y3 -= step;
                y4 -= step;
                vehinh(x1, y1, x2, y2, x3, y3, x4, y4);
                break;
            }
            
            case 75: {
                vehinh(x1, y1, x2, y2, x3, y3, x4, y4);
                x1 -= step;
                x2 -= step;
                x3 -= step;
                x4 -= step;
                vehinh(x1, y1, x2, y2, x3, y3, x4, y4);
                break;
            }
            
            case 77: {
                vehinh(x1, y1, x2, y2, x3, y3, x4, y4);
                x1 += step;
                x2 += step;
                x3 += step;
                x4 += step;
                vehinh(x1, y1, x2, y2, x3, y3, x4, y4);
                break;
            }
            
            case 80: {
                vehinh(x1, y1, x2, y2, x3, y3, x4, y4);
                y1 += step;
                y2 += step;
                y3 += step;
                y4 += step;
                vehinh(x1, y1, x2, y2, x3, y3, x4, y4);
                break;
            }
        }
    } while(ch != 27);
}
