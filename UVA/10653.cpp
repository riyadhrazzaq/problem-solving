#include<stdio.h>
#include<utility>
#include<queue>
#include<string.h>
#include<iostream>


int i,j;
int r,c,sx,sy,col,rr,cc,dx,dy,boma;

using namespace std;


int main()
{

    while(scanf("%d%d",&r,&c)==2)
    {
        if(r==0&&c==0) return 0;

        int** cell = new int *[r];
        for(i=0;i<r;i++)
        {
            cell[i]= new int[c];
        }

        scanf("%d",&col);
        for(i=0;i<col;i++)
        {
            scanf("%d%d",&rr,&boma);
            for(j=0;j<boma;j++)
            {
                scanf("%d",&cc);

                cell[rr][cc]=-1;
            }
        }

        scanf("%d%d",&sx,&sy);
        scanf("%d%d",&dx,&dy);

        int nx[]= {1,-1,0,0};
    int ny[]={0,0,1,-1};
//    int visited[r][c], dist[r][c];
    int** visited = new int *[r];
    int** dist = new int *[r];
    for(i=0;i<r;i++) {
        visited[i]= new int[c];
        dist[i]= new int[c];

    }

    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            visited[i][j]=0;
        }
    }
    queue< pair<int,int> >q;
    q.push(make_pair(sx,sy));
    visited[sx][sy]=1;
    dist[sx][sy]=0;
    while(!q.empty())
    {

        pair<int,int> temp= q.front(); q.pop();
        for(i=0;i<4;i++)
        {
            int tempX=temp.first +nx[i];
            int tempY= temp.second +ny[i];
            if(tempX>=0 &&tempX<r &&tempY>=0&&tempY<c && cell[tempX][tempY]  !=-1 &&visited[tempX][tempY]==0 )
            {
                visited[tempX][tempY]=1;
                dist[tempX][tempY]= dist[ temp.first ][ temp.second ] +1 ;
                q.push( make_pair(tempX,tempY) );
            }
        }
    }
    printf("%d\n",dist[dx][dy]);

    }

}
