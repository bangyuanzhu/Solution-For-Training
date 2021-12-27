#include <bits/stdc++.h>
using namespace std;
int w[1000001];
int cnt[1000001],a[20];

int main()
{
	for(int i=0;i<=19;i++)
	{
		int res=pow(2,i);
		cnt[res]=i;
	}
	int t;
	cin>>t;
	while(t--)
	{
		memset(a,0,sizeof(a));
		int n,W;
		cin>>n>>W;
		int maxn=0;
		for(int i=1;i<=n;i++)
		{
			cin>>w[i];
			a[cnt[w[i]]]++;
			maxn=max(maxn,cnt[w[i]]);
		}
		int tot=n;
		int h=0;
		while(tot)
		{
			int width=W;
			h++;
			for(int i=maxn;i>=0;)
			{
				int res=pow(2,i);
				if(a[i]&&width)
				{
					if(width<res)
					{
						i--;
					}
					else
					{
						int num=min(width/res,a[i]);
						width-=num*res;
						a[i]-=num;
						tot-=num;
						i--;
					}
				}
				else
				{
					if(a[i]==0)
					{
						i--;
						continue;
					}
				}
				if(width==0)
				{
					break;
				}
			}
		}
		cout<<h<<endl;
	}
 } 
