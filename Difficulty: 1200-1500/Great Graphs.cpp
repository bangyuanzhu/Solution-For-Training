#include <bits/stdc++.h>
using namespace std;
int d[100001];
long long sum[100001];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		long long res=0;
		memset(d,0,sizeof(d));
		memset(sum,0,sizeof(sum));
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>d[i];
		}
		sort(d+1,d+n+1);
		for(int i=1;i<=n;i++)
		{
			sum[i]=d[i]+sum[i-1];
		}
		for(int i=n;i>=1;i--)
		{
			res+=(long long)(d[i])*i-sum[i];
		}
		cout<<d[n]-res<<endl;
	}
 }
