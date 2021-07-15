#include <bits/stdc++.h>
using namespace std;
long long x[200001];
long long res[200001];
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
			cin>>x[i]; 
		}
		for(int i=2;i<=n;i++)
		{
			res[i]=(x[i-1]|x[i])^x[i];
			x[i]+=res[i];
		}
		for(int i=1;i<=n;i++)
		{
			cout<<res[i]<<' ';
		}
		cout<<endl;
	}
	return 0;
 } 
