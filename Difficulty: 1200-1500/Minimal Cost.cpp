#include <bits/stdc++.h>
using namespace std;
int a[101];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,u,v;
		cin>>n>>u>>v;
		memset(a,0,sizeof(a));
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		bool flag=1;
		for(int i=2;i<=n;i++)
		{
			if(abs(a[i]-a[i-1])>1)
			{
				flag=0;
				break;
			}
		}
		int minn=u+v;
		if(flag)
		{
			for(int i=2;i<=n;i++)
			{
				if(a[i]==a[i-1])
				{
					minn=min(minn,v+min(v,u));
				}
				else
				{
					if(abs(a[i]-a[i-1])==1)
					{
						minn=min(minn,min(u,v));
					}
				}
			}
		}
		if(!flag)
		{
			cout<<'0'<<endl;
		}
		else
		{
			cout<<minn<<endl;
		}
	}
 } 
