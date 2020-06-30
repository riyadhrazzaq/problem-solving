#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MAX 999999999

ll runDP(int c[][3],int t )
{
    ll dp[t][3];
    int i,j;
    dp[0][0]= MAX;
    dp[0][1]=c[0][1];
    dp[0][2]= dp[0][1]+c[0][2];


    for(i=1;i<t;i++ )
    {
        for(j=0;j<3;j++)
        {
            if(j==0) dp[i][j] = min(dp[i-1][j],dp[i-1][j+1]) +c[i][j];
            else if(j==2) dp[i][j] = min(dp[i-1][j],min(dp[i-1][j-1],dp[i][j-1])) +c[i][j];
            else dp[i][j] = min(dp[i-1][j], min(dp[i-1][j-1],min(dp[i][j-1],dp[i-1][j+1])))+c[i][j];
        }
    }
    /*
    for(i=0;i<t;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",dp[i][j]);
        }
        printf("\n");
    }
*/
    return dp[t-1][1];

}
int main()
{
    int t,ts=0;
    while(scanf("%d",&t)&&t!=0)
    {
        int c[t][3],i,j;

        for(i=0; i<t; i++)
        {
            scanf("%d%d%d",&c[i][0],&c[i][1],&c[i][2]);
        }
        printf("%d. %lld\n",++ts,runDP(c,t));
    }
}
