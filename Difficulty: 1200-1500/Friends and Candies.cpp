#include <bits/stdc++.h>
using namespace std;
int a[200001];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		memset(a,0,sizeof(a));
		int n;
		cin>>n;
		int tot=0;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
			tot+=a[i];
		}
		int k=0;
		if(tot%n!=0)
		{
			k=-1;
		}
		else
		{
			int ave=tot/n;
			for(int i=1;i<=n;i++)
			{
				if(a[i]>ave)
				{
					k++;
				}
			}
		}
		cout<<k<<endl;
	}
 } 
