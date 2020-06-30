#include<bits/stdc++.h>
using namespace std;
vector<int>edge[100005];
int visit[100005],temp,hi=0,level[100005];

int dfs(int n)
{
    memset(visit,0,sizeof(visit));
    hi=0;
    int x;
    stack<int>that;
    that.push(n);
    level[n]=0;
    while(!that.empty())
    {
        temp = that.top();
        that.pop();
        if(visit[temp]==0) visit[temp]=1;
        for(int i=0; i< edge[temp].size(); i++ )
        {
            if(visit[edge[temp][i]]==0)
            {
                that.push(edge[temp][i]);
                level[edge[temp][i]] = level[temp]+1;
                if(level[edge[temp][i]]>hi)
                {
                    hi=level[edge[temp][i]];
                    x= edge[temp][i];
                }
            }
        }
    }
    return x;
}

int main()
{
    int t,n,m,i,j,u,v;
    scanf("%d",&n);
    for(i=0; i<n-1; i++)
    {
        scanf("%d%d",&u,&v);
        edge[u].push_back(v);
        edge[v].push_back(u);
    }



    int z = dfs(dfs(1));
    printf("%d\n",hi);



    return 0;
}





