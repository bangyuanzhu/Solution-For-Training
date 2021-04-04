#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,x,y;
	cin>>n>>x>>y;
	int u=0,d=0,r=0,l=0;
	for(int i=1;i<=n;i++)
	{
		int sx,sy;
		cin>>sx>>sy;
		if(sx<x)
		{
			l++;
		}
		if(sx>x)
		{
			r++;
		}
		if(sy>y)
		{
			u++;
		}
		if(sy<y)
		{
			d++;
		}
	}
	if(l>=r&&l>=u&&l>=d)
	{
		cout<<l<<endl;
		cout<<x-1<<' '<<y;
		return 0;
	}
	if(r>=l&&r>=u&&r>=d)
	{
		cout<<r<<endl;
		cout<<x+1<<' '<<y;
		return 0;
	}
	if(u>=r&&u>=l&&u>=d)
	{
		cout<<u<<endl;
		cout<<x<<' '<<y+1;
		return 0;
	}
	if(d>=r&&d>=u&&d>=l)
	{
		cout<<d<<endl;
		cout<<x<<' '<<y-1;
		return 0;
	}
	
}
