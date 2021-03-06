#include <bits/stdc++.h>
using namespace std;
long long a[200001];
typedef long long LL;
bool cmp(LL x,LL y)
{
	return x>y;
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]);
	}
	sort(a+1,a+1+n,cmp);
	LL ans=0,sum=0;
	for(int i=1;i<=n;i++)
	{
		ans+=sum-a[i]*(i-1);
		sum+=a[i];
	}
	cout<<ans;
	return 0;
}

