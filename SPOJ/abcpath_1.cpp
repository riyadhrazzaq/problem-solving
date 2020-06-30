//spoj_abcpath
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 999999999
#define pb push_back
#define mp make_pair
#define x_axis x+vuj[i]
#define y_axis y+koti[i]
#define next inp[x][y]+1


int inp[51][51];
int vuj[] = {-1,-1,-1,0,0,1,1,1};
int koti[] = {-1,0,1,-1,1,-1,0,1};
int n,m,i,j;
int fun(int x,int y)
{
    queue<pair<int,int>> q;
    q.push(mp(x,y));
    int dist[n][m];
    memset(dist,-1,sizeof dist);
    dist[x][y] = 1;
    while(!q.empty())
    {
        pair<int,int> temp = q.front();
        x = temp.first;
        y = temp.second;
        q.pop();
        for(i=0; i<8; i++)
        {
            if( x_axis>=0&&y_axis>=0&& x_axis <n && y_axis<m && inp[x_axis][y_axis]==next )
            {
              q.push(mp(x_axis,y_axis));
              dist[x_axis][y_axis]  = dist[x][y]+1;
            }
        }
    }
    // find max dist
    int max = dist[0][0];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
          //  printf("%d ",dist[i][j]);
            if(dist[i][j]>max) max = dist[i][j];
        }
      //  printf("\n");
    }
    return max;

}


int main()
{
    int ts=1,A = 65;
    char c;
    while(scanf("%d%d",&n,&m)&&n!=0&&m!=0)
    {
        vector<pair<int,int>>a;
        getchar();
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                scanf("%c",&c);
                inp[i][j] = c;
                if(inp[i][j]==A) a.pb(mp(i,j));
            }
            getchar();
        }

        int res=0,count,k;
        for(k=0; k<a.size(); k++)
        {
            res = max(res,fun(a[k].first,a[k].second));
        }
        printf("Case %d: %d\n",ts++,res);
        memset(inp,0,sizeof inp);
        a.clear();

    }
    return 0;
}

