#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 999999999
#define pb push_back
#define mp make_pair

int parent[1005],i;
vector< pair<ll, pair<int,int> > >edge;
void initParent(int n)
{
    for(i=1; i<=n; i++) parent[i]  = i;
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

ll kruskal()
{
    ll cost,mincost=0;
    int t1,t2;
    for(i=0; i<edge.size(); i++)
    {
        t1= edge[i].second.first;
        t2= edge[i].second.second;
        cost = edge[i].first;
        if( findParent(t1)!=findParent(t2))
        {
            unify(t1,t2);
            mincost+=cost;
        }
    }
    return mincost;
}


int main()
{
   // freopen("inspoj.txt","r",stdin);
    int n,m,t1,t2,t3,t,p;
    ll temp;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d%d",&p,&n,&m);
        initParent(n);
        for(i=0; i<m; i++)
        {
            scanf("%d%d%d",&t1,&t2,&t3);
            temp = t3*p;
            edge.pb( mp(temp,mp(t1,t2)));
        }
        sort(edge.begin(),edge.end());
        ll res = kruskal();
        printf("%lld\n",res);
        edge.clear();
    }

}

