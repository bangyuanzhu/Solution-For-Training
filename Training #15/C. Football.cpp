//How could this program exceed the time limit???
//It has only 1000*1000 loops!!!
#include <bits/stdc++.h>
using namespace std;
int write(int x)
{
    if(x < 0)
    {
        x = -x;
        putchar('-');
    }
    if(x > 9)
        write(x / 10);
    putchar(x % 10 + '0');
}
int read()
{
    int x = 0, w = 1;
    char ch = 0;
    while(ch < '0' || ch > '9')
    {
        if(ch == '-')
            w = -1;
        ch = getchar();
    }
    while(ch >= '0' && ch <= '9')
    {
        x = x * 10 + ch - '0';
        ch = getchar();
    }
    return x * w;
}
int main()
{
	int n,k;
	n=read();
	k=read();
	if(n*k>n*(n-1)/2)
	{
		printf("-1");
		return 0;
	}
	else
	{
		cout<<n*k<<endl;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=k;j++)
			{
				write(i);
				printf(" ");
				write((i+j-1)%n+1);
				printf("\n");
			}
		}
	}
	return 0;
 } 
