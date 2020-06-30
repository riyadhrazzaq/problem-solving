#include<stdio.h>
#include<iostream>
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

        int source,ttl;
        while(scanf("%d%d",&source,&ttl))

        {
            int nods= edge.size(),flag=0;
            int x=edge.size();
            if (source==0&&ttl==0) break;
            if(edge.count(source)==0) {nods+=1; flag=1; }


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

            map<int,int >::iterator it = level.begin();
            for(it; it!=level.end(); it++)
            {
                if(it->second <=ttl) coun++;
            }
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",cas++,nods-coun,source,ttl);
            if(flag==1) edge.erase(source);
           /* map<int, vector<int> >::iterator itt = edge.begin();
            for(itt; itt!=edge.end(); itt++)
            {
                printf("nodes: %d ",itt->first);
            }
            cout<<endl;*/

        }

    }
}







