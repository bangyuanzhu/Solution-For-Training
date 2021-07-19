#include <bits/stdc++.h>
using namespace std;
struct
{
	int fir;
	int sec;
}c[400001];
int fa[400001];
int find(int x)
{
	if(x!=fa[x])
	{
		fa[x]=find(fa[x]);
	}
	return fa[x];
}
void unionset(int x,int y)
{
	x=find(x);
	y=find(y);
	fa[x]=y;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			c[i].fir=0;
			c[i].sec=0;
		}
		for(int i=1;i<=n;i++)
		{
			cin>>c[i].fir;
		}
		for(int i=1;i<=n;i++)
		{
			cin>>c[i].sec;
		}
		for(int i=1;i<=n;i++)
		{
			fa[i]=i;
		}
		int setnum=n;
		for(int i=1;i<=n;i++)
		{
			if(find(c[i].fir)!=find(c[i].sec))
			{
				setnum--;
				unionset(c[i].fir,c[i].sec);
			}
		}
		long long res=1;
		for(int i=1;i<=setnum;i++)
		{
			res*=2;
			res%=1000000007;
		}
		cout<<res<<endl;
	}
 } 
