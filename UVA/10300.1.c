#include<stdio.h>
int main()
{
    int t,ts,n,i;
    long long int a,b,c,sum;
    scanf("%d",&ts);
    for(t=1;t<=ts;t++)
    {
        sum=0;
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            scanf("%lld%lld%lld",&a,&b,&c);
            sum=sum+(a*c);
        }
        printf("%lld\n",sum);
    }
    return 0;
}
