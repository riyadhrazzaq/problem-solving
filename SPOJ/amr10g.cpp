#include<stdio.h>
#include<algorithm>


int main()
{
    int t,n,k,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&k);
        long long a[n];
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);
        }
        std::sort(a,a+n);
        k--;
        long long _min= INT_MAX;
        for(i=0;i<n-k;i++)
        {
            if(a[i+k]-a[i] < _min) _min=a[i+k]-a[i];
        }
        printf("%d\n",_min);
    }
}
