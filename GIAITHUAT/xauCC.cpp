#include<bits/stdc++.h>
using namespace std;
string X,Y;
int xauCC(int m, int n)
{
	if(m == 0 ||n == 0) return 0;
	else if(X[m] == Y[n]) return 1 + xauCC(m-1,n-1);
	else return max(xauCC(m-1,n),xauCC(m,n-1));
}

int xau(string X, string Y)
{
	int m = X.length();
	int n = Y.length();
	int arr[m][n];
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		arr[i][j]=0;
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(X[i-1] == Y[j-1]) arr[i][j] = 1+ arr[i-1][j-1];
			else arr[i][j]= max(arr[i][j-1],arr[i-1][j]);
		}
	}
	return arr[m][n];
	
}

int xauCCArr(string X,string Y)
{
	int m = X.length();
	int n = Y.length();
	int a[m][n];
	for(int i=0;i<=m;i++){
		for(int j=0;j<=n;j++) a[i][j]=0;
	}
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
			if(X[i-1]==Y[j-1]) a[i][j]=1+a[i-1][j-1];
			else a[i][j]=max(a[i][j-1],a[i-1][j]);
	return a[m][n];
}
int main()
{
	X = "CEACEECDCA";
	Y = "AECECAADC";
	
//	cout<<xauCC(m,n)<<endl;
	cout<<xauCCArr(X,Y);
	cout<<xau(X,Y);
}
