#include <bits/stdc++.h>
using namespace std;
int a[100001];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		memset(a,0,sizeof(0));
		int n;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		int sum=0;
		for(int i=1;i<=n;i++)
		{
			for(int j=(1+i/a[i])*a[i];j<=n+i;j+=a[i])
			{
				if(a[j-i]==j/a[i]&&j!=2*i)
				{
					sum++;
				}
			}
		}
		cout<<sum/2<<endl;
	}
}
