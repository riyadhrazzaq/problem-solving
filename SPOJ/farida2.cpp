#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;                //bottom up solution

unsigned long long dp[10000],ar[10000];
unsigned long long mncs(int n)
{
    if(n<0) return 0;
    if(dp[n]!=0) return dp[n];

    dp[n] = max({ (ar[n] + mncs(n-2)), (ar[n-1]+ mncs(n-3) ) });
    return dp[n];
}

int main()
{
    int i,t,x,ts;
    scanf("%d",&t);
    for(ts=1; ts<=t; ts++)
    {
        scanf("%d",&x);
        if(x!=0)
        {
            for(i=0; i<x; i++)
            {
                scanf("%llu",&ar[i]);
            }
            printf("Case %d: %llu\n",ts,mncs(x-1));
        }
        else {
            getchar();
            printf("Case %d: 0\n",ts);
        }

        memset(dp,0,sizeof(dp));
    }

}

