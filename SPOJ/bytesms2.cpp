#include<bits/stdc++.h>
using namespace std;
int dp[1000][1000];

int main()
{
    int t,n,m,i,j;
    scanf("%d",&t);
    while(t--)
    {

        scanf("%d%d",&n,&m);
        int a[n+1][m+1];

        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                scanf("%d",&a[i][j]);   //input grid from (0,0) to (n-1,m-1)
                if(i>0)
                {
                    if(j==0) {
                    a[i][j] = a[i][j] + max({ a[i-1][j],a[i-1][j+1] });
                }
                else if(j==(m-1)) a[i][j] = a[i][j] + max({ a[i-1][j],a[i-1][j-1] });
                else a[i][j] = a[i][j] + max({ a[i-1][j],a[i-1][j+1], a[i-1][j-1] });
                }

            }
        }
        int tot=-1;
        for(i=0;i<m;i++) if( a[n-1][i]>tot ) tot = a[n-1][i];
        printf("%d\n",tot);
    }
}

