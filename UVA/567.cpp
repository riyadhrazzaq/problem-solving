#include<stdio.h>
#include<vector>
#include<queue>
#include<string.h>
#include<iostream>

using namespace std;

int main()
{
    int l,k,i,j,n,temp,ft,source,dest,test=0;
    vector< int >desh[21];
    desh[21].clear();

    for(i=1; i<20 ; i++)
    {
        scanf("%d",&n);

        for(j=0; j<n; j++)
        {
            scanf("%d",&temp);
            desh[i].push_back(temp);
            desh[temp].push_back(i);
        }
    }
    scanf("%d",&ft);
    printf("Test Set #%d\n",++test);

    for(k=0; k<ft; k++)
    {
        scanf("%d%d",&source,&dest);
        //graph traversal

        int level[21];

        for(l=0; l<21; l++)
        {
            level[l]=-1;

        }

        queue<int >q;
        queue<int >null;
        swap(q,null);

        q.push(source);
        level[source]=0;
        int front;
        while(!q.empty())
        {
            front = q.front();
            q.pop();

            for( j=0; j< desh[front].size(); j++ )
            {
                if(level [ desh[front][j] ]==-1 )
                {
                    level[ desh[front][j] ]= level[front]+1;
                    q.push( desh[front][j] );
                }
            }

        }

        printf("%d to %d: %d\n",source,dest,level[dest]);
    }
    printf("\n");


}
