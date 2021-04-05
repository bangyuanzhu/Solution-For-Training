#include <bits/stdc++.h>
using namespace std;
int a[2001];
int gcd(int x,int y)
{
	if(x<y)
	{
		swap(x,y);
	}
	return x%y==0?y:gcd(y,x%y);
}
int main()
{
	int n;
	cin>>n;
	int flag=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		if(a[i]==1)
		{
			flag++;
		}
	}
	int minn=100000000;
	if(flag)
	{
		cout<<n-flag;
		return 0;
	}
	else
	{
		
		for(int i=1;i<=n;i++)
		{
			int cnt=0;
			int x=a[i];
			for(int j=i+1;j<=n;j++)
			{
				cnt++;
				x=gcd(x,a[j]);
				if(x==1)
				{
					minn=min(minn,cnt);
					break;
				}
			}
		}
	}
	if(minn==100000000)
	{
		cout<<"-1";
		return 0;
	}
	cout<<minn+n-1;
	return 0;
} 
