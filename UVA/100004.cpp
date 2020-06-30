#include<stdio.h>
#include<vector>
#include<queue>
using namespace std;
#define MAX 100000

int n,l,i,f,t,source,j,flag;



void color(vector< int >*edge )
{

    int visited[n],crd[n];
    memset(crd,1)
    source = 0;
    queue<int>q;
    q.push(source);
    visited[source]=1;
    crd[source]=0;

    while(!q.empty())
    {
        int temp=q.front();

        for(i=0; i< edge[temp].size(); i++)
        {
            if(visited[edge[temp][i]]!=1)
            {
                q.push( edge[temp][i] );
                visited[edge[temp][i]]=1;

                if(crd[ edge[temp][i] ]!=1 || crd[ edge[temp][i] ]!=0) //mod
                {
                    if(crd[temp]==0 ) crd[ edge[temp][i] ] = 1;
                    else if ( crd[temp]==1 ) crd[ edge[temp][i] ]=0;
                }

            }
        }
        q.pop();
    }

    int c=0;
    flag=0;
    for(i=0; i<n; i++)
    {
        for(j=0; j<edge[i].size(); j++)
        {
            c++;

            if(crd[i]==crd[ edge[i][j] ] )
            {

                flag=1;
                break;
            }
        }
    }

    if(flag==1) printf("NOT BICOLORABLE.\n");
    else if(flag==0) printf("BICOLORABLE.\n");

}

int main()
{


    while(scanf("%d",&n)&&n!=0)
    {
        vector<int>edge[MAX];
        scanf("%d",&l);
        for(i=0; i<l; i++)
        {
            scanf("%d%d",&f,&t);
            edge[f].push_back(t);
            edge[t].push_back(f);
        }
//        cout<<"size of "<<sizeof(edge)<<endl;
        color(edge);

    }

}
