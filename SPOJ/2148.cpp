#include<stdio.h>
int main()
{
    long long int t,n,i,temp,sum;
    scanf("%lld",&t);
    while(t--)
    {
        sum=0;
        printf("\n");
        scanf("%lld",&n);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&temp);
            sum+=(temp%n);
        }

       if( sum%n==0) printf("YES\n");
        else printf("NO\n");
    }
}
