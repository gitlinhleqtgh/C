#include<bits/stdc++.h>
using namespace std;
string X,Y;
int LCS(int m, int n)
{
	if(m==0 || n==0)
		return 0;
	else
		if(X[m-1] == Y[n-1]) return 1+LCS(m-1,n-1);
		else return max(LCS(m-1,n), LCS(m,n-1));
}
int LCS_DP(int m , int n)
{
	int**a; a=new int*[m+1];
	for(int i=0;i<=m;i++) a[i]=new int [n+1];
	for(int i=0;i<=m;i++)
		for(int j=0;j<=n;j++) a[i][j]=0;
	for(int i=1;i<=m;i++)
		for(int j=1;j<=n;j++)
			if(X[i-1]==Y[j-1]) a[i][j]=1+a[i-1][j-1];
			else a[i][j]=max(a[i][j-1],a[i-1][j]);
	return a[m][n];			
}
int main()
{
	X="Lelinh",Y="linh";
	int m=X.length();
	int n=Y.length();
	long kq;
	kq=LCS_DP(m,n);
	cout<<"\nDo dai chuoi con chung lon nhat la :"<<kq;
	return 0;
}

