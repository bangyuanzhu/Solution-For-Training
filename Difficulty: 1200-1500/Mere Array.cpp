#include <bits/stdc++.h>
using namespace std;
int a[100001],b[100001],c[100001];
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
			cin>>a[i];
			b[i]=a[i];
		}
		int minn=a[1];
		for(int i=1;i<=n;i++)
		{
			if(a[i]<minn)
			{
				minn=a[i];
			}
		}
		sort(a+1,a+n+1);
		int k=0;
		for(int i=1;i<=n;i++)
		{
			if(a[i]!=b[i])
			{
				c[++k]=a[i];
			}
		}
		int chk=0;
		for(int i=1;i<=k;i++)
		{
			if(c[i]%minn!=0)
			{
				chk=1;
				break;
			}
		}
		if(chk)
		{
			cout<<"NO"<<endl;
		}
		else
		{
			cout<<"YES"<<endl;
		}
	}
}
