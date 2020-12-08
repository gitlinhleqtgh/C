#include<iostream>
#include<graphics.h>
using namespace std;
struct ToaDo2D
{
	int x, int y;
}
int SOGIAODIEM(ToaDo2D P[];int n)
{
	int dem,i,j,s;
	dem:=0;
	for(i=1;i<=n;i++)
	{
		if(i==n) j=1;	else j=i+1;
		if(i==1) s=n;   else s=i-1;
		if(x==P[i].x)
		{
			if(y<P[i].y)
		    if((x<=Min(P[s].x ,P[j].x))||(x>=Max(P[s].x,P[j].x)))
               dem=dem+2
            else dem=dem+1;
        }
        else
        if((x>Min(P[i].x,P[j].x))&&(x<Max(P[j].x,P[i].x)))
          if (y<=Min(P[i].y,P[j].y)) dem=dem+1;
          else
          if(y<=(x-P[j].x)*(P[i].y-P[j].y)/
           (P[i].x-P[j].x)+P[j].y) dem=dem+1;
		}
	return dem;
}
main(){
	
}
