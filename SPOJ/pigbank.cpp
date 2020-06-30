#include<bits/stdc++.h>
using namespace std;
#define INTMAX 9999999
void unboundedKnapsack_min(int w,int val[],int wt[],int coin)
{
    int dp[w+1],i,j;
    for(i=1;i<w+1;i++)
        dp[i] = INTMAX;
    dp[0]=0;
    for(i=1;i<=w;i++)
    {
        for(j=0;j<coin;j++)
        {
            if(wt[j]<=i)
            {
                dp[i] = min( dp[i], dp[i-wt[j]]+val[j] );
            }
        }
    }
    if(dp[w]==INTMAX) printf("This is impossible.\n");
    else printf("The minimum amount of money in the piggy-bank is %d.\n",dp[w]);
}

int main()
{
    int t,pig,bank,coin,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&pig,&bank,&coin);
        int val[coin+1],wt[coin+1];
        int w= bank-pig;
        for(i=0;i<coin;i++)
            scanf("%d%d",&val[i],&wt[i]);
        unboundedKnapsack_min(w,val,wt,coin);
    }
}
