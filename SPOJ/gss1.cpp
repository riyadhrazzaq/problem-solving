#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 999999999
#define pb push_back
#define mp make_pair
#define left 2*node
#define right (2*node)+1
int a[50010];
struct box
{
    int sfx,pfx,best,sum;
} tree[200045];
box zero;
int max(int a,int b,int c,int d,int e)
{
    return max(a,max(b,max(c,max(d,e))));
}

void build(int start,int end,int node)
{
    if(start==end)
    {
        tree[node].best=tree[node].sfx=tree[node].pfx=tree[node].sum= a[start];
    }
    else
    {
        int mid = (start+end)/2;
        build(start,mid,left);
        build(mid+1,end,right);

        tree[node].pfx = max( tree[left].pfx,tree[left].sum+tree[right].pfx);
        tree[node].sfx = max( tree[right].sfx,tree[right].sum+tree[left].sfx);
        tree[node].sum = tree[left].sum+tree[right].sum;
        tree[node].best= max(   tree[node].pfx, tree[node].sfx,  tree[left].best,  tree[right].best,
                                tree[left].sfx+tree[right].pfx
                            );
    }
}

box query(int x,int y,int start,int end,int node)
{
    if(start>y||end<x) return zero;
    if(start>=x&&end<=y) return tree[node];
    int mid = (start+end)/2;
    if(x>mid) return query(x,y,mid+1,end,right);
    if(y<=mid) return query(x,y,start,mid,left);

    box p1 = query(x,y,start,mid,left);
    box p2 = query(x,y,mid+1,end,right);

    box res;
    res.pfx=res.sfx=res.best=res.sum=INT_MIN;
    res.pfx = max( p1.pfx,p1.sum+p2.pfx );
    res.sfx = max( p2.sfx,p2.sum+p1.sfx );
    res.sum = p1.sum+p2.sum;
    res.best = max( res.pfx,res.sfx,p1.best,p2.best,p1.sfx+p2.pfx );
    return res;

}

int main()
{

    int n,i,m,x,y;
    scanf("%d",&n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    build(0,n-1,1);
    scanf("%d",&m);
    for(i=0; i<m; i++)
    {
        scanf("%d%d",&x,&y);
        box result = query(x-1,y-1,0,n-1,1);
        printf("%d\n",result.best);
    }

    return 0;
}

