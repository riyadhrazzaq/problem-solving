#include<stdio.h>
int main()
{

    long long int n,m;
    int ts,j;
    scanf("%d",&ts);
    for(j=1; j<=ts; j++)
    {
        scanf("%lld%lld",&n,&m);
        printf("Case %d: %lld\n",j,(n/2)*m);
    }
    return 0;
}
