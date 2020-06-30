#include<stdio.h>
int main()
{
    long long int x[100000],n;
    int a,i,j;
    while(scanf("%lld",&n)&&n>-1)
    {
        if(n==0) printf("0");
        else
        {
            i=0;
            while(n!=0)
            {
                x[i++]=n%3;
                n=n/3;
            }
            while(i!=0)
            {
                printf("%d",x[--i]);

            }
        }
        printf("\n");
    }
    return 0;
}
