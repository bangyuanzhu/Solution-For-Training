#include <bits/stdc++.h>
using namespace std;
bool sov(int n,int u,int r,int d,int l)
{
	bool flag=0;
	for(int a1=0;a1<=1;a1++)
	{
		for(int a2=0;a2<=1;a2++)
		{
			for(int a3=0;a3<=1;a3++)
			{
				for(int a4=0;a4<=1;a4++)
				{
					if(u-a1-a2<=n-2&&u>=a1+a2&&r-a2-a3<=n-2&&r>=a2+a3&&d-a3-a4<=n-2&&d>=a3+a4&&l-a4-a1<=n-2&&l>=a4+a1)
					{
						flag=1;
					}
				}
			}
		}
	}
	return flag;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,U,R,D,L;
		cin>>n>>U>>R>>D>>L;
		if(sov(n,U,R,D,L))
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
