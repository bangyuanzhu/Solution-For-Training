#include <bits/stdc++.h>
using namespace std;
int a[101];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int maxn=0,minn=101;
		int pos1=0,pos2=0;
		memset(a,0,sizeof(a));
		int n;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		for(int i=1;i<=n;i++)
		{
			if(a[i]>maxn)
			{
				maxn=a[i];
				pos1=i;
			}
			if(a[i]<minn)
			{
				minn=a[i];
				pos2=i;
			}
		}
		if(pos1>pos2)
		{
			swap(pos1,pos2);
		}
		int leftpos=pos1;
		int rightpos=n-pos2+1;
		int tot=0;
		if(min(leftpos,rightpos)+pos2-pos1<=leftpos+rightpos)
		{
			tot=min(leftpos,rightpos)+(pos2-pos1);
		}
		else
		{
			tot=leftpos+rightpos;
		}
		cout<<tot<<endl;
	}
	return 0;
 } 
