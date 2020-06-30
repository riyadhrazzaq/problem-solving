#include<stdio.h>
#include<algorithm>
#include<string.h>
int dp[2001][2001],val[2001],n,sum=0,a,b;

int deepy(int a,int b)
{
    if(a>b) return 0;
    if(dp[a][b]!=-1)
        return dp[a][b];

     dp[a][b]= std::max({ deepy(a,b-1)+ val[b],
                                deepy(a+1,b)+ val[a]
                              });

    return dp[a][b];
}


int main()
{
    int i,j,t=0,ans;
    while(scanf("%d",&n)&&n!=0)
    {
        memset(dp,-1,sizeof dp);
        for(i=0; i<n; i++) scanf("%d",&val[i]);
        a= 0; b=n-1;
        ans = deepy(a,b);
        a=0, b=0;
        int fst,snd;
        for(i=1;i<=n;i++)
        {
            if(dp[a][b+1]>dp[a+1][b]) { fst= dp[a--][b+1]; if(max)  }
        }


      //  printf("In game %d, the greedy strategy might lose by as many as %d points.\n",++t,ans);
    }
}

