#include <bits/stdc++.h>
using namespace std;
int sum[100001],a[100001],com[100001];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		unordered_map <int,int> f;
		f[0]=1;
		long long cont=0;
		for(int i=1;i<=n;i++)
		{
			a[i]=s[i-1]-'0';
			sum[i]+=a[i]+sum[i-1];
			com[i]=sum[i]-i;
			cont+=f[com[i]];
			f[com[i]]++;
		}
		memset(sum,0,sizeof(sum));
		cout<<cont<<endl;
	}
	
	return 0;
}
