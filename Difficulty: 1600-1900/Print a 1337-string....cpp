#include <bits/stdc++.h>
using namespace std; 
int rec[100001];
int main()
{
	int t;
	cin>>t;
	for(int i=1;i<=10000;i++)
	{
		rec[i]=i*(i-1)/2;
	}
	while(t--)
	{
		int n;
		cin>>n;
		int cur=n;
		int num7,num3,numex;
		int chk=0;
		for(int i=2;i<=10000;i++)
		{
			if(rec[i]<=n)
			{
				num3=i;
				num7=n/rec[i];
				numex=n-rec[i]*num7;
				if(num7+numex+num3+1<=10000)
				{
					chk=1;
				}
			}
			if(chk)
			{
				break;
			}
		}
		cout<<"133";
		for(int i=1;i<=numex;i++)
		{
			cout<<'7';
		}
		for(int i=1;i<=num3-2;i++)
		{
			cout<<'3';
		}
		for(int i=1;i<=num7;i++)
		{
			cout<<'7';
		}
		cout<<endl;
	}
 } 
