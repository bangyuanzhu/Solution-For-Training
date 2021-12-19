#include <bits/stdc++.h>
using namespace std;
#define MAXN 2000001
int lh[MAXN],rh[MAXN],dv[MAXN],uv[MAXN];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int w,h;
		cin>>w>>h;
		int lhnum,rhnum,dvnum,uvnum;
		cin>>lhnum;
		for(int i=1;i<=lhnum;i++)
		{
			cin>>lh[i];
		}
		cin>>rhnum;
		for(int i=1;i<=rhnum;i++)
		{
			cin>>rh[i];
		}
		cin>>dvnum;
		for(int i=1;i<=dvnum;i++)
		{
			cin>>dv[i];
		}
		cin>>uvnum;
		for(int i=1;i<=uvnum;i++)
		{
			cin>>uv[i];
		}
		long long maxh=max(lh[lhnum]-lh[1],rh[rhnum]-rh[1])*(long long)h;
		long long maxv=max(dv[dvnum]-dv[1],uv[uvnum]-uv[1])*(long long)w;
		cout<<max(maxh,maxv)<<endl;
	}
 } 
