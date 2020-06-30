#include<stdio.h>
#include<vector>
#include<queue>
#include<string.h>
#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int l,k,i,j,n,temp,ft,source,dest,test=0;
    vector< int >desh[21];

    while(scanf("%d",&n)!=EOF)
    {

        for( i=1; i<=20; i++ ) desh[i].clear();

        for(i=0; i<n; i++)
        {
            scanf("%d",&temp);
            desh[1].push_back(temp);
            desh[temp].push_back(1);

        }

        for(i=2; i<20 ; i++)
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

//            for(i=1; i<=20; i++) printf("level[%d]: %d\n",i,level[i]);

            cout.width(2);
            cout <<right; cout<<source; cout<<" to "; cout.width(2); cout<<right; cout<<dest; cout<<": "; cout<<level[dest]<<endl;


            queue<int >null;
            swap(q,null);
            desh[21].clear();

        }
        printf("\n");
    }



}

