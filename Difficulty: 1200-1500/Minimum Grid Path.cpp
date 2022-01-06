#include <bits/stdc++.h>
using namespace std;
long long c[100001];
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
			cin>>c[i]; 
		}
		if(n==1)
		{
			cout<<c[1]<<endl;
			continue;
		}
		if(n==2)
		{
			cout<<2*c[1]+2*c[2]<<endl;
			continue;
		}
		long long oddminv=c[1];
		long long evenminv=c[2];
		long long tot=2*c[1]+2*c[2];
		long long sum=n*c[1]+n*c[2];
		long long cur=sum;
		for(int i=3;i<=n;i++)
		{
			if(i%2)
			{
				if(c[i]<oddminv)
				{
					cur-=(n-i/2)*(oddminv-c[i]);
					oddminv=c[i]; 
				}
				else
				{
					cur+=c[i]-oddminv;
				}
			}
			else
			{
				if(c[i]<evenminv)
				{
					cur-=(n-i/2+1)*(evenminv-c[i]);
					evenminv=c[i];
				}
				else
				{
					cur+=c[i]-evenminv;
				}
			}
			sum=min(sum,cur);
		}
		cout<<sum<<endl;
	}
 } 
