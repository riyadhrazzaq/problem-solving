#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int a;
        unsigned long long int r;
        scanf("%lld",&a);
        printf("%llu\n",(250*a)-58);
    }
}
