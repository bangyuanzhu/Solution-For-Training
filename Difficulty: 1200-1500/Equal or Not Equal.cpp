#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while(t--)
	{
        string s; 
		cin>>s;
    	string ans = "YES";
   	 	long long c = 0;
    	for(long long i=0;i<s.size();i++) 
		{
        	if(s[i]=='N')
        	{
        		c++;
			}	
    	}
    	if(c==1)
    	{
    		ans = "NO";
		}
		cout<<ans<<endl;
    }
}
