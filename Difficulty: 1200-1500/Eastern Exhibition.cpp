#include <bits/stdc++.h>
using namespace std;
int x[1001],y[1001];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		memset(x,0,sizeof(x));
		memset(y,0,sizeof(y));
		for(int i=0;i<n;i++)
		{
			cin>>x[i]>>y[i];
		}
		sort(x,x+n);
		sort(y,y+n);
		int upper=n/2;
		int lower=(n-1)/2; 
		long long  sumx=x[upper]-x[lower]+1;
		long long sumy=y[upper]-y[lower]+1;
		cout<<sumx*sumy<<endl;
	}
	return 0;
 } 
