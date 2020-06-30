#include<bits/stdc++.h>

#define ll long long
#define LEFT 2*node
#define RIGHT 2*node+1

int64_t tree[200009],a[100003];

void update(ll start,ll end,ll idx,int64_t val,ll node)
{
    if(start==end) {a[idx]+=val; tree[node]=a[idx]; } //leaf
    else
    {
        ll mid=(start+end)/2;
        if(idx>=start&&idx<=mid) update(start,mid,idx,val,LEFT);
        else update(mid+1,end,idx,val,RIGHT);
        tree[node]= tree[LEFT]+ tree[RIGHT];
    }
}
int64_t query(ll start,ll end,ll i,ll j,ll node)
{

    if( start>j||end<i ) return 0;
    else if(i<=start&&j>=end) return tree[node];
    else
    {
        ll mid = (start+end)/2;
        int64_t tmp1= query(start,mid,i,j,LEFT);
        int64_t tmp2= query(mid+1,end,i,j,RIGHT);
        int64_t tmp=tmp1+tmp2;
        return tmp;
    }

}

int main()
{
    long long t,n,c,i,k,x,p,q;
    int64_t v;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld%lld",&n,&c);
        memset(tree,0,sizeof tree);
        memset(a,0,sizeof a);
        for(i=0;i<c;i++)
        {
            scanf("%lld",&x);
            (x==0)?scanf("%lld%lld%" SCNd64 "",&p,&q,&v):scanf("%lld%lld",&p,&q);
            if(x==0)
            {
                for(k=p;k<=q;k++) update(1,n,k,v,1);
            }
            else printf("%" PRId64 "\n",query(1,n,p,q,1));
        }
    }
}
