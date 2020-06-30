#include<stdio.h>
#include<limits.h>
#include<algorithm>
using namespace std;
#define left 2*node
#define right (2*node)+1

long long a[100002];
long long tree[200005];


void create(int start,int end,int node)
{
    if(start==end) tree[node]=a[start];
    else{
        int mid = (start+end)/2;
        create(start,mid,left);
        create(mid+1,end,right);
        tree[node] = min(tree[left],tree[right]);
    }
}
long long khoj(int start,int end,int x,int y,int node)
{
    if(end<x||start>y) return INT_MAX;
    else if( start>=x&&end<=y ) return tree[node];
    else
    {
        int mid = (start+end)/2;
        return min( khoj(start,mid,x,y,left), khoj(mid+1,end,x,y,right) );
    }
}

int main()
{
    int n,i,q,start,end;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a[i]);
    }
    create(0,n-1,1);
    scanf("%d",&q);
    for(i=0;i<q;i++)
    {
        scanf("%d%d",&start,&end);
        printf("%lld\n",khoj(0,n-1,start,end,1));
    }


}
