#include<stdio.h>
#include<string.h>
#include<queue>
#include<utility>
using namespace std;
int dist[9][9],i,j;

void BFS(int sx,int sy)
{
    int visited[9][9];
    int nx[]={ 1,1,2,2,-1,-1,-2,-2 };
    int ny[]={ -2,2,-1,1,2,-2,1,-1 };

    memset(visited,0, sizeof visited);
    memset(dist,0, sizeof dist);
    queue< pair<int , int> >q;
    q.push( make_pair(sx,sy));
    visited[sx][sy]=1;
    dist[sx][sy]=0;

    //runbfs

    while(!q.empty())
    {
        pair <int,int> t=q.front(); q.pop();
        for(i=0;i<8;i++)
        {
            int tx=t.first+ nx[i] ;
            int ty=t.second+ ny[i] ;

            if( tx>=1&&tx<=8&&ty>=1&&ty<=8&&visited[tx][ty]!=1 )
            {
               visited[tx][ty]=1;
               q.push( make_pair(tx,ty) );
               dist[tx][ty]= dist[t.first][t.second] +1 ;
            }
        }
    }

}


int main()
{
    char a[3],b[3];
    while(scanf("%s%s",a,b)!=EOF)
    {
        int sx=a[0]-48-'0', sy=a[1]-'0',dx=b[0]-48-'0', dy=b[1]-'0';
        BFS(sx,sy);
        printf("To get from %s to %s takes %d knight moves.\n",a,b,dist[dx][dy]);



    }
}
