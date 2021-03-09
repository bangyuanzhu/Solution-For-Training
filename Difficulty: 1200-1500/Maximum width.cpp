#include <bits/stdc++.h>
using namespace std;
#define MAXN 200002
char s[MAXN],t[MAXN];
int l[MAXN],r[MAXN];
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>s[i];
	}
	for(int i=1;i<=m;i++)
	{
		cin>>t[i];
	}
	l[0]=0;
	r[m+1]=n+1;
	for(int i=1;i<=m;i++)
	{
		for(int j=l[i-1]+1;;j++)
		{
			if(s[j]==t[i])
			{
				l[i]=j;
				break;
			}
		}
	}
	for(int i=m;i>=1;i--)
	{
		for(int j=r[i+1]-1;j>=1;j--)
		{
			if(s[j]==t[i])
			{
				r[i]=j;
				break;
			}
		}
	}
	int maxn=0;
	for(int i=1;i<m;i++)
	{
		if(r[i+1]-l[i]>maxn)
		{
			maxn=r[i+1]-l[i];
		}
	}
	cout<<maxn;
	return 0;
 }
