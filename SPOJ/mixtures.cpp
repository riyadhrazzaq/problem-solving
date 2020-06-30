#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 105
#define pb push_back
#define mp make_pair
int row[MAX],dp[MAX][MAX],sum[MAX][MAX];
int fun(int b,int e)
{
    if(b>=e) return 0;
    if(dp[b][e]!=0) return dp[b][e];
    if(b+1==e) return row[b]*row[e];

    int ans = INT_MAX;
    for(int i=b; i<e; i++)
    {
        int left = fun(b,i);
        int right = fun(i+1,e);
        int lxr = sum[b][i]*sum[i+1][e];
        int t = left+right+lxr;
        ans = min(t,ans);
    }
    dp[b][e] = ans;
    return ans;
}


int main()
{
    freopen("inspoj.txt","r",stdin);
    int n,i,j,t;

    while(scanf("%d",&n)!=EOF)
    {
        for(i=0; i<n; i++)
            scanf("%d",&row[i]);
        for(i=0; i<n; i++)
        {
            sum[i][i] = row[i];
            for(j=i+1; j<n; j++)
            {
                sum[i][j] =( sum[i][j-1] + row[j] )%100;
            }
        }
        printf("%d\n",fun(0,n-1));
        memset(dp,0,sizeof dp);
        memset(sum,0,sizeof sum);
    }

}


