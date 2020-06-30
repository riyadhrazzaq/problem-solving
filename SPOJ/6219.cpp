#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,m,i,j;
    scanf("%d",&t);
    while(t--)
    {
        char a[2001],b[2001];
        scanf("%s",a);
        getchar();
        scanf("%s",b);
        n=strlen(a);
        m=strlen(b);
        int dp[n+1][m+1];
        for(i=0;i<=n;i++) dp[i][0]=i;
        for(i=0;i<=m;i++) dp[0][i]=i;

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(b[i]==a[j]) dp[i+1][j+1] = dp[i][j];
                else {
                    dp[i+1][j+1] = min(min(dp[i][j],dp[i+1][j]),dp[i][j+1])+1;
                }
            }
        }
        printf("%d\n",dp[n][m]);
        memset(dp,0,sizeof(dp));
    }
    return 0;
}








