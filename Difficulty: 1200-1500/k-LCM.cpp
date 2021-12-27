#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int n1=n-(k-3);
		if(n1%4==0)
		{
			for(int i=1;i<=k-3;i++)
			{
				cout<<"1 ";
			}
			cout<<n1/4<<' '<<n1/4<<' '<<n1/2<<endl;
			continue;
		}
		if(n1%4==1)
		{
			for(int i=1;i<=k-3;i++)
			{
				cout<<"1 ";
			}
			cout<<1<<' '<<n1/2<<' '<<n1/2<<endl;
			continue;
		}
		if(n1%4==2)
		{
			for(int i=1;i<=k-3;i++)
			{
				cout<<"1 ";
			}
			cout<<2<<' '<<n1/2-1<<' '<<n1/2-1<<endl;
			continue;
		}
		if(n1%4==3)
		{
			for(int i=1;i<=k-3;i++)
			{
				cout<<"1 ";
			}
			cout<<1<<' '<<n1/2<<' '<<n1/2<<endl;
			continue;
		}
	}
 } 
