#include<stdio.h>
#include<algorithm>
#include<limits.h>
#define left 2*node
#define rite 2*node+1
using namespace std;


using namespace std;

int tree[2000005];

void create(int a[],int start,int end,int node)
{
    if(start==end) tree[node]=a[start];
    else
    {
        int mid = (start+end) /2;
        create(a,start,mid,left);
        create(a,mid+1,end,rite);
        if(tree[left]>tree[rite]) tree[node]= tree[left];
        else tree[node] = tree[rite];
    }
}
/*
void update(int start,int end,int idx,int val,int node)
{
    if(start==end)
    {
        ar[idx]=val;
        tree[node] =val;
    }
    else
    {
        mid = (start+end)/2;
        if( idx<=mid&&idx>=start ) update(start,mid,idx,val,left);
        else update(mid+1,end,idx,val,rite);
        tree[node] = min(tree[left],tree[rite]);
    }
}
*/
int khoj(int start,int end,int x,int y,int node)
{
    if(start>y||end<x) return -1;
    else if( start>=x&&end<=y ) return tree[node];
    else
    {
        int mid =( start+end )/ 2 ;
        return max( khoj(start,mid,x,y,left),khoj(mid+1,end,x,y,rite) );
    }
}
int main()
{
    int n,i,k,hi,shi,tmp,j;
    scanf("%d",&n);
    int a[n+1];
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    create(a,0,n-1,1);
    for(i=0; i<=n-k; i++)
        printf("%d ",khoj(0,n-1,i,i+k-1,1));

}
