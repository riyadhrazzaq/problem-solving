#include<bits/stdc++.h>
int dp[1000002];
bool aWins(int k,int l,int n)
{
    if(dp[n]!=-1) return dp[n];
    for(int i=2;i<=n;i++)
    {
        if(dp[i-1]==0||dp[i-k]==0||dp[i-l]==0) dp[i]=1; //A wins
        else dp[i]=0; //B wins

    }
    return dp[n];
}

int main()
{
    memset(dp,-1,sizeof dp);
    dp[0]=0;
    dp[1]=1;
    int k,l,m,i,n;
    scanf("%d%d%d",&k,&l,&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&n);
        printf("%c",aWins(k,l,n)?'A':'B');
    }
    printf("\n");
}
