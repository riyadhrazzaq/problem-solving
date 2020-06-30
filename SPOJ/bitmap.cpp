#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int t,m,n,temp,i,j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&m,&n);
        int grid[m][n];
        char str[n];
        vector< pair<int,int> > white;
        for(i=0;i<m;i++)
        {
            getchar();
            scanf("%s",str);
            for(j=0;j<n;j++)
            {
                grid[i][j] = str[j]-48;
                if( str[j]=='1' ) white.push_back(make_pair(i,j)); //push white's index(i,j)
            }
        }
        //calculation
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if( grid[i][j]==1) printf("0 ");
                else{
                    int dis=m+n+1;
                    for(int k=0;k<white.size();k++)
                    {
                        temp = abs( i-white[k].first ) + abs( j- white[k].second );
                        if(temp<dis) dis= temp;
                    }
                    printf("%d ",dis);
                }
            }
            printf("\n");
        }

    }
    return 0;

}
