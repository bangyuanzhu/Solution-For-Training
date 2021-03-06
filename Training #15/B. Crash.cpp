#include <bits/stdc++.h>
using namespace std;
int sol[100001];
int main()
{
	int n;
	cin>>n;
	bool flag=1;
	for(int i=1;i<=n;i++)
	{
		int x,k;
		cin>>x>>k;
		if(x>sol[k])
		{
			flag=0;
		}
		else
		{
			if(x==sol[k])
			{
				sol[k]++;
			}
		}
	}
	if(flag)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
	return 0;
 } 
