#include <bits/stdc++.h>
using namespace std;
long long x[100001];
long long y[100001];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		memset(x,0,sizeof(x));
		memset(y,0,sizeof(y));
		long long tx,ty;
		int j=0,k=0;
		for(int i=1;i<=2*n;i++)
		{
			cin>>tx>>ty;
			if(!tx)
			{
				j++;
				y[j]=fabs(ty);
			}
			else
			{
				k++;
				x[k]=fabs(tx);
			}
		}
		sort(x+1,x+n+1);
		sort(y+1,y+n+1);
		double sum=0;
		for(int i=1;i<=n;i++)
		{
			sum+=sqrt(1.0*x[i]*x[i]+1.0*y[i]*y[i]);
		}
		printf("%.15lf\n",sum);
	}
	return 0;
 } 
