#include<bits/stdc++.h>
using namespace std;
#define MAX 1000000005
#define ll long long
#define LEFT (2*node)
#define RIGHT (2*node)+1

int i,j,t,n,m,b;
ll tree[300005],res;

ll min(ll a, ll b) { return (a>b)?b:a; }

void build(ll a[],int x,int y,int node)
{
    if(x==y) tree[node]=a[x];
    else
    {
        int mid = (x+y)/2;
        build(a,x,mid,LEFT);
        build(a,mid+1,y,RIGHT);
        tree[node] = min(tree[LEFT],tree[RIGHT]);
    }
}

ll query(int start,int end,int i,int j,int node)
{
    if( start>j||end<i ) return MAX;
    else if(i<=start&&j>=end) return tree[node];
    else
    {
        int mid = (start+end)/2;
        ll tmp1= query(start,mid,i,j,LEFT);
        ll tmp2= query(mid+1,end,i,j,RIGHT);
        return min(tmp1,tmp2);
    }
}

int main()
{
    ll temp;
    while(scanf("%d",&n)&&n!=0)
    {
        ll a[n];
        for(i=0; i<n; i++) scanf("%lld",&a[i]);
        build(a,0,n-1,1);
        for(i=0;i<n;i++)
        {
            for(j=i;j<n;j++)
            {
                temp = query(0,n-1,i,j,1)*(j-i+1);
                if(temp>res) res = temp;
            }
        }
        printf("res %lld\n",res);
        memset(tree,0,sizeof tree);
        res=0;
    }
}

