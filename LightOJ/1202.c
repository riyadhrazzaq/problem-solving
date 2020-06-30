#include<stdio.h>
int main()
{
    long long int ts,i,r1,c1,r2,c2;
    scanf("%d",&ts);
    for(i=1; i<=ts; i++)
    {
        scanf("%lld%lld%lld%lld",&r1,&c1,&r2,&c2);
        if((r1+c1)%2!=(r2+c2)%2) printf("Case %d: impossible\n",i);
        else if((r1+c1)==(r2+c2)||(r1-c1)==(r2-c2)) printf("Case %d: 1\n",i);
        else printf("Case %d: 2\n",i);

    }
    return 0;
}
