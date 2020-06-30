#include<stdio.h>
#include<vector>
#include<map>
#include<queue>
#include<iostream>

using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        if(n==0) return 0;

        map< int,vector <int> >edge;
        map<int,int>color;
        int l,f,t,i,j;

        scanf("%d",&l);
        for(i=0 ; i<l; i++)
        {
            scanf("%d%d",&f,&t);
            edge[f].push_back(t);
            edge[t].push_back(f);
        }

        queue<int>q;
        q.push(0);
        color[0]=0;

        while(!q.empty())
        {
            int temp= q.front();

            for(i=0; i<edge[temp].size(); i++)
            {
                if(!color.count(edge[temp][i]))
                {
                    q.push(edge[temp][i]);
                    if( color[temp]==0 )
                    {
                        color[ edge[temp][i] ]=1;
                    }
                    else color[ edge[temp][i]]=0;
                }
            }
            q.pop();
        }

        map<int,int>::iterator it=color.begin();
        int flag=0;
        for(i=0; i<edge.size(); i++)
        {
            for(j=0; j<edge[i].size(); j++)
            {
                if(color[i]==color[edge[i][j]])
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==1) printf("NOT BICOLORABLE.\n");
        else if(flag==0) printf("BICOLORABLE.\n");
        while(it!=color.end())
        {
            cout<<it->first<<" color "<<it->second<<endl;
            it++;
        }

        color.clear();
        edge.clear();
    }
    return 0;
}
