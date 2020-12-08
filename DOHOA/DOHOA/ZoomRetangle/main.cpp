#include<conio.h>
#include<math.h>
#include<graphics.h>
#define Step 10;

void vehinh(int x0, int y0) {
    cleardevice();
    rectangle(0, 0, x0, y0);
}

int main() {
    initwindow(1000, 500);
    int x0 = 70, y0 = 50;
    char ch;
    int x10pt = 0.1 * x0;
    int y10pt = 0.1 * y0;
    vehinh(x0,y0);
    do {
        ch = getch();
        switch(ch) {
            case 80: {
                vehinh(x0,y0);
                x0 = x0 - x10pt;
                y0 = y0 - y10pt;
                vehinh(x0,y0);
                break;
            }
            case 72: {
                vehinh(x0,y0);
                x0 = x0 + x10pt;
                y0 = y0 + y10pt;
                vehinh(x0,y0);
                break;
            }
        }
    } while(ch!=27);
    getch();
    closegraph();
}
