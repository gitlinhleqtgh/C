#include<iostream>
#include<math.h>
using namespace std;
int Chenh(int arr[],int n)
{
	int min = arr[0];
	int max = arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i]<min){
			min=arr[i];
		}
		if(arr[i]>max){
			max=arr[i];
		}
	}
	return max-min;
}
int main()
{
	int n=5;
	int arr[] = {2,1,3,4,5};
	cout<<Chenh(arr,n);
}
