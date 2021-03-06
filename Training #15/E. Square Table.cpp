#include <bits/stdc++.h>
using namespace std;
int a[101],b[101];
void sov(int x,int v[])
{
	if(x==1)
	{
		v[1]=1;
	}
	if(x==2)
	{
		v[1]=3;
		v[2]=4;
	}
	else
	{
		if(x%2)
		{
			v[1]=2;
			for(int i=2;i<x;i++)
			{
				v[i]=1;
			}
			v[x]=(x+1)/2;
		}
		else
		{
			for(int i=1;i<x;i++)
			{
				v[i]=1;
			}
			v[x]=(x-2)/2;
		}
	}
}
int main()
{
	int n,m;
	cin>>n>>m;
	sov(n,a);
	sov(m,b);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cout<<a[i]*b[j]<<' ';
		}
		cout<<endl;
	}
}
