#include<iostream>
#include<math.h>
using namespace std;
bool SoNguyenTo(int num)
{
	if(num < 2){
        return false;
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
int Sum(int k)
{
	int sum=0;
	for(int i=1;i<=k;i++)
	{
		if(SoNguyenTo(i) && k%i==0)
			sum+=i;
	}
	cout<<sum;
}
int main(){
	int k = 21;
	Sum(k);
}
