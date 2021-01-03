#include<iostream>
#include <stdio.h>
const int MAX_SIZE = 100;
 
using namespace std;

int fiboDq(int n)
{
	if(n < 2) return n;
	return fiboDq(n-1) + fiboDq(n-2);
}
int fiboArr(int n, int arr[])
{
	arr[0]=0;
	arr[1]=1;
	for(int i = 2; i<=n; i++)
	{
		arr[i]= arr[i-1]+arr[i-2];
	}
	return arr[n];
}
int main()
{
	cout << fiboDq(8)<<endl;
	int n = 8;
	int arr[MAX_SIZE];
	cout << fiboArr(n,arr);
}
