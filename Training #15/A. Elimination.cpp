#include <bits/stdc++.h>
using namespace std;
int main()
{
	int c,d,n,m,k;
	cin>>c>>d>>n>>m>>k;
	int sum=0;
	if(n*m<=k)
	{
		sum=0;
	}
	else
	{
		if(c>=d*n)
		{
			sum+=(n*m-k)*d;
		}
		else
		{
			sum+=(n*m-k)/n*c;
			if((n*m-k)%n*d>c)
			{
				sum+=c;
			}
			else
			{
				sum+=(n*m-k)%n*d;
			}
		}
	}
	cout<<sum;
	return 0;
}
