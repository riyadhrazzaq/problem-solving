#include<stdio.h>
int main()
{
    int n,k,sum,a,b;
    while(scanf("%d%d",&n,&k)==2)
    {
        sum=n;
        while(n>=k)
        {
            a=n/k;
            sum=sum+a;
            b=n%k;
            n=a+b;
        }
        printf("%d\n",sum);
    }
    return 0;
}
