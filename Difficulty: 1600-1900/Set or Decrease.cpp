#include <bits/stdc++.h>
using namespace std;
long long a[200001];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		long long k;
		cin>>n>>k;
		long long sum=0;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		sort(a+1,a+n+1);
		if(sum<=k)
		{
			cout<<'0'<<endl;
			continue;
		}
		long long minv=sum-k;
		long long tot=a[1];
		for(int i=n;i>=2;i--)
		{
			tot+=a[i];
			long long cur=sum-tot;
			long long expt=(floor)((k-cur)*1.0/(n-i+2));
			long long opr;
			if(expt>=a[1])
			{
				opr=n-i+1;
			}
			else
			{
				opr=a[1]-expt+n-i+1;
			}
			minv=min(minv,opr);
		}
		cout<<minv<<endl;
	}
 } 
