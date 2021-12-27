#include <bits/stdc++.h>
using namespace std;
int a[100001],b[100001];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		memset(b,0,sizeof(b));
		int sum=0;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			a[i]%=m;
			b[a[i]]++;
		}
		if(b[0])
		{
			sum++;
		}
		for(int i=1;i<=m/2;i++)
		{
			if(2*i==m)
			{
				if(b[i])
				{
					sum++;
				}	
			}
			else
			{
				if(b[i]==0||b[m-i]==0)
				{
					sum+=max(b[i],b[m-i]);
				}
				else
				{
					if(abs(b[i]-b[m-i])<=1)
					{
						sum++;
					}
					else
					{
						sum+=max(b[i],b[m-i])-min(b[i],b[m-i]);
					}
				}
			}
		}
		cout<<sum<<endl;
	}
 } 
