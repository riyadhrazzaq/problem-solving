#include<stdio.h>
int main()
{
    long long int i,k,sum1,sum2,n,m;
    sum1=0;
    sum2=0;
    scanf("%lld%lld",&n,&m);
    for(i=1; i<=n; i+=m)
    {
        for(k=1; k<=m; k++)
        {
            sum1=sum1+i;
            sum2=sum2+(i+m);
            i++;

        }
    }

    printf("Case %lld\n",sum2-sum1);
}



