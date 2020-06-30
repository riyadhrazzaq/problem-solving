#include<bits/stdc++.h>
using namespace std;
#define MAX 150001
#define LEFT (2*node)
#define RIGHT (2*node)+1




int i,j,t,n,m,b;
struct container
{
    int sfx,pfx,sum,best;


} tree[MAX];


void create(int a[],int x,int y,int node)
{
    if(x==y)
    {
        tree[node].sum =a[x];
        tree[node].sfx=a[x];
        tree[node].pfx=a[x];
        tree[node].best=a[x];
    }
    else
    {
        int mid=(x+y)/2;
        create(a,x,mid,LEFT);
        create(a,mid+1,y,RIGHT);
        tree[node].sum= tree[LEFT].sum+ tree[RIGHT].sum;
        tree[node].pfx= max({ tree[LEFT].pfx,tree[LEFT].sum+ tree[RIGHT].pfx });
        tree[node].sfx= max({ tree[RIGHT].pfx,tree[RIGHT].sum+ tree[LEFT].sfx });

        tree[node].best = max(
        {
            tree[node].sfx,
            tree[node].pfx,
            tree[LEFT].best,
            tree[RIGHT].best,
            tree[LEFT].sfx+ tree[RIGHT].pfx;

        });


    }


}
container query(int start,int end,int i,int j,int node)
{
    container res;
    res.sfx=res.pfx=res.sum=res.best = INT_MIN;

    if( start>j||end<i ) return res;
    else if(i<=start&&j>=end) return tree[node] ;

    else
    {
        int mid = (start+end)/2;
        if(i>mid) return query(mid+1,end,i,j,RIGHT);
        if(j<=mid) return query(start,mid,i,j,LEFT);

        container left = query(start,mid,i,j,LEFT);
        container right = query(mid+1,end,i,j,RIGHT);
        res.sum = tree[LEFT].sum + tree[RIGHT].sum;
        res.pfx= max(tree[LEFT].pfx,tree[LEFT].sum+tree[RIGHT].pfx );
        res.sfx= max(tree[RIGHT].sfx,tree[RIGHT].sum+tree[LEFT].sfx );
        res.best = max(
        {
            res.sfx,
            res.pfx,
            tree[LEFT].best,
            tree[RIGHT].best,
            tree[LEFT].sfx+ tree[RIGHT].pfx
        });
        return res;
    }
}

int main()
{
    scanf("%d",&n);
    int a[n],xi,yi,q;
    for(i=0; i<n; i++) scanf("%d",&a[i]);
    create(a,0,n-1,1);
    for(i=1; i<15; i++) printf("%d-%d-%d \n",tree[i].pfx,tree[i].sum,tree[i].sfx);
    cout<<endl;

    scanf("%d",&q);
    while(q--)
    {
        scanf("%d%d",&xi,&yi);
        printf("%d\n",query(0,n-1,xi-1,yi-1,1).best);
    }
    return 0;
}

