#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		bool chk=0;
		int n,a,b;
		cin>>n>>a>>b;
		for(int i=0;pow(a,i)<=n;i++)
		{
			if(a==1)
			{
				if((n-1)%b==0)
				{
					chk=1;
				}
				break;
			}
			if((int)(n-pow(a,i))%b==0)
			{
				chk=1;
				break;
			}
		}
		if(chk)
		{
			cout<<"Yes"<<endl;
		}
		else
		{
			cout<<"No"<<endl;
		}
	}
 } 
