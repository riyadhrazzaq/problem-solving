#include<stdio.h>
#include<vector>
#include<map>
#include<queue>

using namespace std;

map< int, vector< int > > edge;
    map < int,int >level;

int main()
{
    int NC,i,f,t,cas=1;;

    while(scanf("%d",&NC)==1)
    {
        if (NC==0) return 0;
        edge.clear();
        for(i=0; i<NC; i++)
        {
            scanf("%d%d",&f,&t);
            edge[f].push_back(t);
            edge[t].push_back(f);

        }
        int nods= edge.size();
        int source,ttl;
        while(scanf("%d%d",&source,&ttl))

        {
            if (source==0&&ttl==0) break;
            level.clear();
            queue < int >q;
            q.push(source);
            level[source]=0;
            int coun=0;
            while(!q.empty())
            {
                int temp=q.front();
                q.pop();

                for(i=0; i<edge[temp].size(); i++)
                {
                    if(!level.count(edge[temp][i]))
                    {
                        level[edge[temp][i]] = level[temp] + 1;

                        q.push(edge[temp][i]);
                    }
                }
            }
            printf("dist %d\n",level.count(source));
            map<int,int >::iterator it = level.begin();
            for(it; it!=level.end(); it++)
            {
                if(it->second <=ttl) coun++;
            }
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.| total nodes %d\n",cas++,nods-coun,source,ttl,nods);

        }

    }
}






