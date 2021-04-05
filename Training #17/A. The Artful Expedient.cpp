#include <bits/stdc++.h>
using namespace std;
int a[2001],b[2001];
int flag[4000001];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		flag[a[i]]=1;
	}
	for(int i=1;i<=n;i++)
	{
		cin>>b[i];
		flag[b[i]]=1;
	}
	long long num=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(flag[a[i]^b[j]])
			{
				num++;
			}
		}
	 }
	if(num%2==0)
	{
		cout<<"Karen";
		return 0;
	}
	else
	{
		cout<<"Koyomi";
		return 0;
	}
}
