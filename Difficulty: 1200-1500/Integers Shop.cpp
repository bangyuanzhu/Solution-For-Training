#include <bits/stdc++.h>
using namespace std;
int  l[100001], r[100001], c[100001];
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin >> n;
    	for (int i=0;i<n;i++) 
		{
        	cin >>l[i]>>r[i]>>c[i];
    	}
    	int ck1 = 0, ck2 = 0, ck3 = 0;
    	for (int i = 0; i < n; i++) 
		{
        	if (l[i] < l[ck1] || (l[i] == l[ck1] && c[i] < c[ck1]))
        	{
        		ck1 = i;
			}
        	if (r[i] > r[ck2] || (r[i] == r[ck2] && c[i] < c[ck2]))
			{
				ck2 = i;
			 } 
        	if (l[i] < l[ck3] || r[i] > r[ck3] || (l[i] == l[ck3] && r[i] == r[ck3] && c[i] < c[ck3])) 
			{
				ck3 = i;
			}
        	if (l[ck3] <= l[ck1] && r[ck3] >= r[ck2] && (l[ck3] < l[ck1] || r[ck3] > r[ck2] || c[ck3] < (ck1==ck2?c[ck1]:c[ck1]+c[ck2]))) 
			{
            	cout << c[ck3] <<endl;
        	} 
       		else
			{
				if (ck1 == ck2)
				{
					cout<<c[ck1]<<endl;;
				}
    			else
				{
					cout<<c[ck1] + c[ck2]<<endl;
				}
			}
		}	
    }
}

