#include <bits/stdc++.h>
using namespace std;
int w[100001];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int x;
		cin>>x;
		int len=s.length();
		for(int i=0;i<len;i++)
		{
			w[i]=1;
		}
		for(int i=0;i<len;i++)
		{
			if(s[i]=='0')
			{
				if(i>=x)
				{
					w[i-x]=0;
				}
				if(i+x<len)
				{
					w[i+x]=0;
				}
			}
		}
		int q=0;
		for(int i=0;i<len;i++)
		{
			if(s[i]=='1')
			{
				int chk=0;
				if(i>=x)
				{
					if(w[i-x]==1)
					{
						chk=1;
					}
				}
				if(i+x<len)
				{
					if(w[i+x]==1)
					{
						chk=1;
					}
				}
				if(chk==0)
				{
					q=1;
				}
			}
		}
		if(q)
		{
			cout<<"-1"<<endl;
			continue;
		}
		else
		{
			for(int i=0;i<len;i++)
			{
				cout<<w[i];
			}
			cout<<endl;
		}
	}
}
