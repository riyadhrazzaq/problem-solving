#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 999999999
#define pb push_back
#define mp make_pair

int parent[1005],i,n,loop=1;
vector<pair<double, pair<int,int> > >edge;
void initParent(int n)
{
    for(i=0; i<=n; i++) parent[i]  = i;
}

int findParent(int a)
{
    if( parent[a]==a ) return a;
    else
    {
        parent[a]=findParent(parent[a]);
        return parent[a];
    }
}
void unify( int a,int b )
{
    int u= findParent(a), v= findParent(b);
    if(u!=v)
    {
        parent[v]=u;
    }
}

void kruskal(int r,int u,int v,int w)
{
    double cu=0.0,cv=0.0,mincost=0.0,temp;
    int t1,t2,count=0;
    for(i=0; i<edge.size(); i++)
    {
        if((n-count)==w) break;
        t1= edge[i].second.first;
        t2= edge[i].second.second;
        temp = edge[i].first;
        if( findParent(t1)!=findParent(t2))
        {
            unify(t1,t2);
            if(temp<=r)  cu+= temp;
            else  cv+= temp;
            count++;
        }
    }
    printf("Caso #%d: %.3lf %.3lf\n",loop++,cu*u,cv*v);

}

int main()
{
    freopen("inspoj.txt","r",stdin);
    int r,w,u,v,t,p,j;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d%d%d",&n,&r,&w,&u,&v);
        initParent(n);
        int x[n],y[n];
        for(i=0; i<n; i++)
        {
            scanf("%d%d",&x[i],&y[i]);
        }
        double dist;
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(i!=j)
                {
                    dist = sqrt( pow( x[i]-x[j],2)+pow( y[i]-y[j],2));
                    edge.pb(mp(dist,mp(i,j)));
                }
            }
        }
        sort(edge.begin(),edge.end());
//        for(i=0; i<edge.size(); i++)
//            printf("%d %d %.3lf\n",edge[i].second.first,edge[i].second.second,edge[i].first);

        kruskal(r,u,v,w);
        edge.clear();
    }

}

