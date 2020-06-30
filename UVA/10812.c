#include<stdio.h>
int main()
{
    long long int a,b,sum,diff,ts,t,temp;
    scanf("%lld",&ts);
    for(t=1;t<=ts;t++)
    {
        scanf("%lld%lld",&a,&b);
        sum=a; diff=b;
        if(b>a) {temp=b; b=a; a=temp;}
        b=(a-b)/2;
        a=a-b;

        if((a+b)==sum&&(a-b)==diff) printf("%lld %lld\n",a,b);
        else printf("impossible\n");


    }
    return 0;
}
