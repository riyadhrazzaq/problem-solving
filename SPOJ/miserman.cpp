#include<bits/stdc++.h>
using namespace std;
int dp[1001][1001],a[1001][1001];

void pathFinder(int i,int j)
{
    if(i==0)
    {
        printf("%d -> ",a[i][j]);
        return;
    }
    else if( dp[i][j]== a[i][j]+ dp[i-1][j] ) pathFinder(i-1,j);
    else if( dp[i][j]== a[i][j]+ dp[i-1][j+1] ) pathFinder(i-1,j+1);
    else if( dp[i][j]== a[i][j]+ dp[i-1][j-1] ) pathFinder(i-1,j-1);
    printf("%d -> ",a[i][j]);
}

int main()
{
    int n,m,i,j;

    scanf("%d%d",&n,&m);

    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            scanf("%d",&a[i][j]);   //input grid from (0,0) to (n-1,m-1)
            if(i==0) dp[i][j]= a[i][j];
            if(i>0)
            {
                if(j==0)
                {
                    dp[i][j] = a[i][j] + min({ dp[i-1][j],dp[i-1][j+1] });
                }
                else if(j==(m-1)) dp[i][j] = a[i][j] + min({ dp[i-1][j],dp[i-1][j-1] });
                else dp[i][j] = a[i][j] + min({ dp[i-1][j],dp[i-1][j+1], dp[i-1][j-1] });
            }

        }
    }

    int tot=INT_MAX,temp=0;
    for(i=0; i<m; i++) if( dp[n-1][i]<tot )
        {
            tot = dp[n-1][i];
            temp=i;
        }
    printf("%d\n",tot);
    /*        pathFinder(n-1,temp);
            printf("\n");*/


}

