#include<iostream>
#include<math.h>
using namespace std;
bool SoDoiXung(int num)
{
	int temp;
	int r;
	int sum=0;
	for(temp=num;num!=0;num=num/10){
         r=num%10;
         sum=sum*10+r;
    }
    if(temp==sum)
         return true;
    else
         return false;
    //return 0;
}
bool SoNguyenTo(int num)
{
	if(num < 2){
        return true;
    }
    int count = 0;
    for(int i = 2; i <= sqrt(num); i++){
        if(num % i == 0){
            count++;
        }
    }
    if(count == 0){
        return true;
    }else{
        return false;
    }
}
int main()
{
	int a=11111;
	int b=22222;
	int count=0;
	for(int i=a;i<=b;i++)
	{
		if(SoDoiXung(i)&&SoNguyenTo(i))
		count++;
	}
	cout<<count;
}
