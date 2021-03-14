#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize(2)
int sum[200001];
int a[200001];
inline int read()
{
    int x=0,f=1;
    char ch=getchar();
    while(ch<'0'||ch>'9')
    {
        if(ch=='-')
            f=-1;
        ch=getchar();
    }
    while(ch>='0' && ch<='9')
        x=x*10+ch-'0',ch=getchar();
    return x*f;
}
void write(int x)
{
    if(x<0)
        putchar('-'),x=-x;
    if(x>9)
        write(x/10);
    putchar(x%10-'0');
    return;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		memset(sum,0,sizeof(sum));
		memset(a,0,sizeof(sum));
		map<unsigned long long,int> mp;
		int n;
		n=read();
		for(int i=1;i<=n;i++)
		{
			a[i]=read();
			mp[a[i]]++;
		}
		int maxn=0;
		for(int i=1;i<=n;i++)
		{
			if(mp[a[i]]!=0)
			{
				if(mp[a[i]]>maxn)
				{
					maxn=mp[a[i]];
				}
				sum[mp[a[i]]]++;
				mp[a[i]]=0;
			}
		}
		int left=n;
		int right=0;
		int minn=n-sum[n];
		for(int i=maxn;i>=1;i--)
		{
			left-=sum[i]*i;
			int tot=left+right;
			if(tot<minn)
			{
				minn=tot;
			}
			right=right*2+sum[i];
		}
		cout<<n;
		printf("\n");
	}
}
