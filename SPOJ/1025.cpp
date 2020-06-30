#include<bits/stdc++.h>
using namespace std;


int part(int a[],int p, int r)
{
    int i, j=p-1, pvt= a[r];
    for(i=p; i<r; i++)
    {
        if(a[i]<=pvt) {
            swap(a[++j],a[i]);
        }
    }
    swap(a[++j],a[r]);
    return j;
}

void quicksort(int a[],int p,int r)
{
    int q;
    if(p>=r) return;
    if(p < r)
    {
        q= part(a,p,r);
        quicksort(a,p,q-1);
        quicksort(a,q+1,r);
    }
}

int main()
{
    int t,n,i;
    scanf("%d",&t);
    while(t--&&t>=0)
    {
        scanf("%d",&n);
        int a[n],b[n];
        long long int sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            scanf("%d",&b[i]);
        }
        quicksort(a,0,n-1);
        quicksort(b,0,n-1);

        for(i=0;i<n;i++)
        {
            sum+= (a[i]*b[i]);
        }
        printf("%lld\n",sum);
    }
    return 0;
}
