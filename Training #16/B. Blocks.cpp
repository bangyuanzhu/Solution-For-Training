#include <bits/stdc++.h>
using namespace std;
char p[201];
int rec[301];
char change(char a)
{
	char b;
	if(a=='W')
	{
		b='B';
	}
	else
	{
		b='W';
	}
	return b;
}
int main()
{
	int n;
	string s;
	cin>>n;
	cin>>s;
	for(int i=1;i<=n;i++)
	{
		p[i]=s[i-1];
	}
	int cntb=0,cntw=0;
	for(int i=1;i<=n;i++)
	{
		if(p[i]=='W')
		{
			cntw++;
		}
	}
	cntb=n-cntw;
	if(cntb%2&&cntw%2)
	{
		cout<<"-1";
		return 0;
	}
	else
	{
		int k=1;
		for(int i=1;i<n;i++)
		{
			if(p[i]=='B')
			{
				p[i]=change(p[i]);
				p[i+1]=change(p[i+1]);
				rec[k++]=i;
			}
		}
		if(p[n]=='B')
		{
			for(int i=1;i<n;i+=2)
			{
				p[i]=change(p[i]);
				rec[k++]=i;
			}
		}
		cout<<k-1<<endl;
		for(int i=1;i<k;i++)
		{
			cout<<rec[i]<<' ';
		}
	}
	return 0;
 }
