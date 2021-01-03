#include<iostream>
#include<stdio.h>
const int MAX_SIZE = 100;
using namespace std;
int thDq(int k, int n)
{
	if(k==0 || k==n) return 1;
	return thDq(k-1, n-1) + thDq(k,n-1);
}
int thArr(int k, int n)
{
	int arr[MAX_SIZE][MAX_SIZE];
	if(k == 0 || k == n) return 1;
	else
	for(int i = 0 ; i <= k ; i++)
	for(int j = 0 ; j <= n ; j++)
	if(i == 0 || i == j) arr[i][j] = 1;
	else
	arr[i][j] = arr[i][j-1] + arr[i-1][j-1];
	return arr[k][n];
}
long binomialCoefficient ( int n, int k )
{
    long res = 1;
    for ( int i = 1; i <= k ; i ++ , n-- )
        res = res *n/i;
    return res;
}
int main()
{
	cout << thDq(3,5)<<endl;
	cout << thArr(3,5)<<endl;
	cout << binomialCoefficient(5,3);
}
