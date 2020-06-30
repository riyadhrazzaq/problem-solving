//*** undirected graph coloring by Welch-Powell algorithm ***//

#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#define line edge[temp][i]

using namespace std;
int rong[2005],visited[2005];

bool color( vector< vector<int> >&edge,int v,int source)
{
    int i,j;
    queue< int > q;
    q.push(source);
    visited[source]=1;
    rong[source] = 1;

    while(!q.empty())
    {
        int temp = q.front();

        for(i=0; i< edge[temp].size(); i++ )
        {
            if(rong[line]==rong[temp] ) return false;
            else if(rong[line]==-1) rong[line]=1-rong[temp];
            if(visited[line]==0) { visited[line]=1; q.push(line); }

        }
        q.pop();
    }
    return true;
}
bool isBiPartite( vector< vector<int> >&edge,int v)
{
    memset(rong,-1,sizeof(rong));
    memset(visited,0,sizeof(visited));
    for(int i=1;i<=v;i++)
    {
        if(!visited[i]&&!color(edge,v,i)) return false;
    }
    return true;
}


int main()
{
    int v,e,f,i,j,t,testcase;
    scanf("%d",&testcase);
    for(int ts=1; ts<=testcase; ts++)
    {
        scanf("%d%d",&v,&e);
        vector< vector<int> >edge(v+2);   //2d vector
        for(i=0; i<e; i++)
        {
            scanf("%d%d",&f,&t);
            edge[f].push_back(t);
            edge[t].push_back(f);
        }
        isBiPartite(edge,v)?printf("Scenario #%d:\nNo suspicious bugs found!\n",ts):printf("Scenario #%d:\nSuspicious bugs found!\n",ts);
    }
    return 0;

}

