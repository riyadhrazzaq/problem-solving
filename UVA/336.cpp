#include<stdio.h>
#include<vector>
#include<queue>

using namespace std;

#define MAX 100000
int i, NC, f, t, node , ttl, cases;


void superman(vector < int >*edge)
{
//    printf("source %d\n",node);
    cases++;
    queue < int > qu;
    int level[MAX],visited[MAX] = {0} , NofNode=1, unreach=0;
    qu.push(node);
    level[node]=0;
    visited[node]=1;


    while(!qu.empty())
    {
        int temp= qu.front();

        for(i=0;i< edge[temp].size();i++ )
        {
            if( visited[edge[temp][i]]==0)
            {
//                printf("Connected to %d: %d\n",temp,edge[temp][i]);
                qu.push(edge[temp][i]);
                visited[edge[temp][i]]=1;
                level[ edge[temp][i] ]= level[temp]+1;

                NofNode++;
//                printf("Nodes %d\n",NofNode);
                if( level[ edge[temp][i] ]>ttl ) unreach++;

            }
        }
        qu.pop();
    }

    printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",cases,unreach,node,ttl);



}


int main()
{

    while(scanf("%d",&NC)&&NC!=0)

    {
        vector < int > edge[MAX];
        for(i=0;i<NC;i++)
        {
            scanf("%d%d",&f,&t);
            edge[f].push_back(t);
            edge[t].push_back(f);
        }
        while(scanf("%d%d",&node,&ttl)&&node!=0&&ttl!=0 )

        {
            superman(edge);
        }

    }

}
