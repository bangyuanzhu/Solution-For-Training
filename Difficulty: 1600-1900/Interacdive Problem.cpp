#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	int k=0;
	cin>>n;
	int l=1;
	int r=n-1;
	int cpy=k;
	while(l<r)
	{
		int chk=0;
		int midv=(l+r)/2;
		if(midv*2!=l+r)
		{
			midv++;
		}
		if(r-l==1)
		{
			int nextk=n-r%n;
			cout<<"+ "<<nextk<<endl;
			fflush(stdout);
			cin>>k;
			if(k==cpy)
			{
				r=l;
			}
			else
			{
				l=r;
			}
			l+=nextk;
			r+=nextk;
			continue;
		}
		int nextk=n-(midv%n);
		cout<<"+ "<<nextk<<endl;
		fflush(stdout);
		cin>>k;
		if(k==cpy)
		{
			r=midv-1;
		}
		else
		{ 
			l=midv;
		}
		l+=nextk;
		r+=nextk;
		cpy=k;
	}
	cout<<"! "<<l<<endl;
 } 
