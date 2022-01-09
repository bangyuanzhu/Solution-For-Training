#include <bits/stdc++.h>
using namespace std;
int q[10001],qu[10001];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		memset(q,0,sizeof(q));
		for(int i=1;i<=n;)
		{
			if(q[i])
			{
				i++;
				continue;
			}
			int k=0;
			int prev;
			while(1)
			{
				cout<<"? "<<i<<endl;
				fflush(stdout);
				cin>>qu[i];
				if(qu[i]==i)
				{
					if(k)
					{
						q[prev]=i;
						break;
					}
					else
					{
						k=1;
						prev=i;
						continue;
					}
				}
				else
				{
					if(k)
					{
						q[prev]=qu[i];
						prev=qu[i];
					}
					else
					{
						continue;
					}
				}
			}
			i++;
		}
		cout<<"!";
		for(int i=1;i<=n;i++)
		{
			cout<<" "<<q[i];
		}
		cout<<endl;
	}
 } 
