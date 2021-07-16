#include <bits/stdc++.h>
using namespace std;
long long a[200001];
long long m[200001];
int main()
{
	long long n,k,x;
	cin>>n>>k>>x;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	int q=0;
	for(int i=2;i<=n;i++)
	{
		if(a[i]-a[i-1]>x)
		{
			q++;
			m[q]=(ceil)((a[i]-a[i-1])*1.0/x)-1;
		}
	}
	sort(m+1,m+q+1);
	int uni=q+1;
	for(int i=1;i<=q;i++)
	{
		if(k>=m[i])
		{
			k-=m[i];
			uni--;
		}
		else
		{
			break;
		}
	}
	cout<<uni;
	return 0;
 } 
