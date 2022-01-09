#include <bits/stdc++.h>
using namespace std;
int pos[27],pot[27];
int s[27][200001];
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		char c;
		cin>>c;
		pos[c-'a'+1]++;
		s[c-'a'+1][pos[c-'a'+1]]=i;
	}
	int m;
	cin>>m;
	for(int i=1;i<=m;i++)
	{
		string t;
		cin>>t;
		int cont=0;
		memset(pot,0,sizeof(pot));
		for(int j=0;j<t.length();j++)
		{
			pot[t[j]-'a'+1]++;
		}
		for(int j=1;j<=26;j++)
		{
			cont=max(cont,s[j][pot[j]]);
		}
		cout<<cont<<endl;
	}
 } 
