#include <bits/stdc++.h>
using namespace std;
int a[1001];
int chk[1001];
int t[1001],l[1001],r[1001];
int main()
{
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>t[i]>>l[i]>>r[i];
	}
	for(int i=1;i<=m;i++)
	{
		if(t[i]==1)
		{
			for(int j=l[i];j<r[i];j++)
			{
				a[j]=1;
			}
		}
	}
	for(int i=1;i<=m;i++)
	{
		if(t[i]==0)
		{
			int brk=0;
			for(int j=l[i];j<r[i];j++)
			{
				if(a[j]==0)
				{
					brk=1;
					break;
				}
			}
			if(brk==0)
			{
				cout<<"NO"<<endl;
				return 0;
			}
		}
	}
		cout<<"YES"<<endl;
		int res=1001;
		cout<<res<<' ';
		for(int i=1;i<n;i++)
		{
			if(a[i])
			{
				cout<<res<<' ';
			}
			else
			{
				cout<<--res<<' ';
			}
		}
		cout<<endl;
 } 
