#include<stdio.h>
#include<tuple>
#include<algorithm>
using namespace std;

int main()
{
    long long sum,m,mx,n;
    scanf("%lld%lld",&n,&m);
    int a[n+1],i,idx;
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    mx=0,sum=0,idx=0;
    for(i=0; i<n; i++)
    {
        sum+=a[i];
        if(sum>m)
        {
            while(sum>m)
            {
                sum-=a[idx++];
            }
        }
        if(sum>mx) mx=sum;
    }
    printf("%lld\n",mx);



}

