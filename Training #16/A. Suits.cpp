#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c,d,e,f;
	cin>>a>>b>>c>>d>>e>>f;
	int tot=0;
	for(int i=0;i<=min(a,d);i++)
	{
		int j=min(min(b,c),min(c,d-i));
		tot=max(tot,i*e+j*f);
	}
	cout<<tot;
	return 0; 
 } 
