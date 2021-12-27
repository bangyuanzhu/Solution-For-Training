#include <bits/stdc++.h>
using namespace std;
long long n,k;
long long lsearch(long long l,long long r)
{
	if(l==r)
	{
		return r;
	}
	long long midp=(l+r)/2;
	long long midv=(midp+1)*midp/2;
	if(k>midv)
	{
		lsearch(midp+1,r);
	}
	else
	{
		lsearch(l,midp);
	}
}
long long rsearch(long long l,long long r)
{
	if(l==r)
	{
		return r;
	}
	long long midp=(l+r)/2;
	long long midv=n*n-(2*n-midp-1)*(2*n-midp)/2;
	if(k>midv)
	{
		rsearch(midp+1,r);
	}
	else
	{
		rsearch(l,midp);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		if(k>=n*n)
		{
			cout<<2*n-1<<endl;
			continue;
		}
		long long mid=n*(n+1)/2;
		if(k<=mid)
		{
			cout<<lsearch(1,n)<<endl;
		}
		else
		{
			cout<<rsearch(n+1,2*n-1)<<endl;
		}
	}
 } 
