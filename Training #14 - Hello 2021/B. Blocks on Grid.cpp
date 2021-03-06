#include <bits/stdc++.h>
using namespace std;
int main()
{
	int h,w;
	cin>>h>>w;
	int minn=101;
	int ans=0;
	for(int i=1;i<=h;i++)
	{
		for(int j=1;j<=w;j++)
		{
			int m;
			cin>>m;
			if(minn>m)
			{
				minn=m;
			}
			ans+=m;
		}
	}
	cout<<ans-minn*h*w;
	return 0;
 } 
