#include<bits/stdc++.h>
int dp[7000][7000];
int main()
{
    int t,i,j,l;
    scanf("%d",&t);
    while(t--)
    {
        char str[6101];
        scanf("%s",str);
        l=strlen(str);
        char rst[l+1];
        for(i=0;i<l;i++) rst[i]= str[l-1-i];
        rst[l]='\0';
        for(i=0;i<l;i++) { dp[i][0]=0; dp[0][i]=0; }
        for(i=0;i<l;i++)
        {
            for(j=0;j<l;j++)
            {
                if(str[i]==rst[j]) dp[i+1][j+1]= dp[i][j]+1;
                else
                {
                    dp[i+1][j+1]= std::max({ dp[i][j+1],dp[i+1][j]});
                }
            }
        }
        printf("%d\n",l-dp[l][l]);

    }
}
