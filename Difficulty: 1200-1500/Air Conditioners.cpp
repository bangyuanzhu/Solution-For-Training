#include <bits/stdc++.h>
using namespace std;
#define MAXN 300001
#define MAXVALUE 2000000001
unsigned long long a[MAXN],t[MAXN],l[MAXN],r[MAXN];
int main()
{
	int q;
	cin>>q;
	while(q--)
	{
		memset(a,0,sizeof(a));
		int n,k;
		cin>>n>>k;
		for(int i=1;i<=n;i++)
		{
			l[i]=MAXVALUE;
			r[i]=MAXVALUE;
			t[i]=MAXVALUE;
		}
		for(int i=1;i<=k;i++)
		{
			cin>>a[i];
		}
		for(int i=1;i<=k;i++)
		{
			cin>>t[a[i]];
			l[a[i]]=t[a[i]];
			r[a[i]]=t[a[i]]; 
		}
		for(int i=2;i<=n;i++)
		{
			l[i]=min(t[i],l[i-1]+1);
		}
		for(int i=n-1;i>=1;i--)
		{
			r[i]=min(t[i],r[i+1]+1);
		}
		for(int i=1;i<=n;i++)
		{
			cout<<min(l[i],r[i])<<' ';
		}
		cout<<endl;
	}
	return 0;
} 
