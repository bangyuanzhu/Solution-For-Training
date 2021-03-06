#include <bits/stdc++.h>
using namespace std;
bool flag[100001]={0};
int main()
{
	for(int i=1;i<=100000;i++)
	{
		int num=i;
		while(num>=1)
		{
			if(num%10==7)
			{
				flag[i]=1;
				break;
			}
			num/=10;
		}
	}
	for(int i=1;i<=100000;i++)
	{
		int num=i;
		while(num>=1)
		{
			if(num%8==7)
			{
				flag[i]=1;
				break;
			}
			num/=8;
		}
	}
	int n;
	cin>>n;
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		if(flag[i]==0)
		{
			ans++;
		}
	}
	cout<<ans;
	return 0;
 } 
