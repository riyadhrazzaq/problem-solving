#include<stdio.h>
#include<algorithm>
using namespace std;
int dp[501][501];

pair<int,int> knapsack(int itm,int cost[],int fun[],int budget)
{
    int i,j,spent=0;
    for(i=0; i<=budget; i++) dp[0][i]=0;
    for(i=0; i<=itm; i++) dp[i][0]=0;

    for(i=1; i<=itm; i++)                 // i = current party
    {
        for(j=1; j<=budget; j++)       // j = result budget
        {
            if(cost[i-1]<= j)                   // w[i-1] = current value's weight
            {
                dp[i][j]= max ( fun[i-1] + dp[i-1][j- cost[i-1] ], dp[i-1][j] );
            }
            else dp[i][j] = dp[i-1][j];
        }
    }

    for(i=1; i<=budget; i++)            //search last row
    {
        if(dp[itm][i] == dp[itm][budget] ) {
            spent = i;
            break;
        }
    }
    return make_pair(spent,dp[itm][budget]);

}
int main()

{
    int budget,n,i,j;
    while(scanf("%d%d",&budget,&n))
    {
        if(budget==0&&n==0) break;
        int cost[n],fun[n];
        for(i=0; i<n; i++)
        {
            scanf("%d%d",&cost[i],&fun[i]);
        }
        pair<int,int>result;
        result=  knapsack(n,cost,fun,budget);
        printf("%d %d\n",result.first,result.second);

    }
}
