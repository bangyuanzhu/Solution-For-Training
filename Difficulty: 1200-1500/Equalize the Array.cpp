#include <bits/stdc++.h>
using namespace std;
int sum[200001];
unsigned long long a[200001];
int main()
{
	ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		memset(sum,0,sizeof(sum));
		memset(a,0,sizeof(a));
		map<unsigned long long,int> mp;
		int n;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			mp[a[i]]++;
		}
		int maxn=0;
		for(int i=1;i<=n;i++)
		{
			if(mp[a[i]]!=0)
			{
				if(mp[a[i]]>maxn)
				{
					maxn=mp[a[i]];
				}
				sum[mp[a[i]]]++;
				mp[a[i]]=0;
			}
		}
		unsigned long long left=n;
		unsigned long long right=0;
		unsigned long long minn=n-sum[n];
		int numn=0;
		for(int i=maxn;i>=1;i--)
		{
			left-=sum[i]*i;
			unsigned long long tot=left+right;
			if(tot<minn)
			{
				minn=tot;
			}
			right+=numn+sum[i];
			numn+=sum[i];
		}
		cout<<minn<<endl;
	}
}
