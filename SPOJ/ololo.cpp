#include<stdio.h>
int main()
{
    long long int x,res=0;
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&x);
        if(i==0) res=x;
        else { res = x^res; }
    }
    printf("%lld\n",res);
}
