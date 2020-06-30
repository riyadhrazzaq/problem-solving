#include<bits/stdc++.h>
using namespace std;
int f=1,parent[20005];

int findPar(int n)
{
   // printf("findPar %d\n",n);

    if(parent[n]==n) return n;
    else parent[n]= findPar(parent[n]);
    return parent[n];
}

void makeset(int u, int v)
{
    int x= findPar(u);
    int y= findPar(v);

    if(x==y) f=0;
    else if(x!=y)
    {
        parent[x]= y;
    }
}

int main()
{
    int n,m,u,v,i;
    scanf("%d%d",&n,&m);

    for(i=1; i<=n; i++)
    {
        parent[i]=i;
    }
    for(i=1; i<=m; i++)
    {
        scanf("%d%d",&u,&v);
        makeset(u,v);
    }
    for(i=1; i<=n; i++)
    {
        m=findPar(i);

    }
    if(f==1)
    {
        unordered_set<int > c(parent+1,parent+(n+1));

        if(c.size()==1)
        {
            printf("YES\n");
        }

        else { printf("NO\n");}
    }
    else
    {

        printf("NO\n");
    }



}
