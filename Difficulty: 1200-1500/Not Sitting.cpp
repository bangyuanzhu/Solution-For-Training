#include <bits/stdc++.h>
using namespace std;
int a[100001];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int k=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=m;j++)
			{
				int maxx=max(i-1,n-i);
				int maxy=max(j-1,m-j);
				a[++k]=maxx+maxy;
			}
		}
		sort(a+1,a+k+1);
		for(int i=1;i<=n*m;i++)
		{
			cout<<a[i]<<' ';
		}
		cout<<endl;
	}
 } 
