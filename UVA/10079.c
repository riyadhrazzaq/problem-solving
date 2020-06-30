#include<stdio.h>
int main()
{
    long long int n;
    while(scanf("%lld",&n)&&n>=0){
        printf("%lld\n",((n*n+n+2))/2);
    }
    return 0;
}
