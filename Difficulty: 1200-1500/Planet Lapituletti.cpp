#include <bits/stdc++.h>
using namespace std;
char s[5];
int mir[5]={0,1,2,5,8};
int t[5];
int r[5];
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		memset(s,0,sizeof(s));
		
		int h,m;
		cin>>h>>m;
		cin>>s;
		int hh=(s[0]-'0')*10+(s[1]-'0');
		int mm=(s[3]-'0')*10+(s[4]-'0');
		bool chk=0;
		int i=hh,j=mm;
		while(i<h&&!chk)
		{
			//for(;j<m&&!chk;)
			//{
				t[1]=i/10;
				t[2]=i%10;
				t[3]=j/10;
				t[4]=j%10;
				int flag=0;
				for(int p=0;p<=4;p++)
				{
					for(int k=1;k<=4;k++)
					{
						if(t[k]==mir[p])
						{
							flag++;
						}
					}
				}
				if(flag==4)
				{
					for(int p=4,q=1;q<=4;q++,p--)
					{
						if(t[q]==2)
						{
							r[p]=5;
							continue;
						}
						if(t[q]==5)
						{
							r[p]=2;
							continue;
						}
						else
						{
							r[p]=t[q];
						}
					}
					if(r[1]*10+r[2]<h&&r[3]*10+r[4]<m)
					{
						cout<<t[1]<<t[2]<<':'<<t[3]<<t[4]<<endl;
						chk=1;
					}
				}
				if(j==m-1)
				{
					j=0;
					i++;
				}
				else
				{
					j++;/ 
				}
			//}
		}
		if(!chk)
		{
			cout<<"00:00"<<endl;
		}
	}
	return 0;
 } 
