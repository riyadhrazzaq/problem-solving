#include<stdio.h>
int main()
{
    long long int n,m,i,k,sum1=0,sum2=0;
    scanf("%lld%lld",&n,&m);
    for(i=1; i<=n; i+=m)
    {
        for(k=1; k<=m; k++)
        {

        sum1=sum1+i; i++;
        }
    }
    for(i=1+m; i<=n; i+=m)
    {
        for(k=1; k<=m; k++)
        {

        sum2=sum2+i; i++;
        }
    }
    printf("Case 1: %lld\n",sum2-sum1);

    return 0;
}
