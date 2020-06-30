#include<stdio.h>
#include<algorithm>
#include<string.h>
int dp[2001][2001],val[2001],n;

int trt(int a,int b,int year)
{
    if(a>b) return 0;
    if(dp[a][b]!=-1)
        return dp[a][b];


    return dp[a][b]= std::max({ trt(a,b-1,year+1)+ year*val[b],
                                trt(a+1,b,year+1)+ year*val[a]
                              });


}

int main()
{
    int i,j;
    scanf("%d",&n);
    memset(dp,-1,sizeof dp);
    for(i=0; i<n; i++)
    {
        scanf("%d",&val[i]);
    }
    printf("%d\n",trt(0,n-1,1));
    for(i=0;i<=n;i++)
        {
            for(j=0;j<=n;j++) printf("[ %d ] ",dp[i][j]);
            printf("\n");
        }
}
