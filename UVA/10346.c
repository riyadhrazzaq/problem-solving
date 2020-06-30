#include<stdio.h>
int main()
{
    int n,k,sum,x,ex,y;
    while(scanf("%d%d",&n,&k)==2)
    {
        sum=n; ex=0; x=k;
        while(x>=k)
        {
            x=n/k; y=n%k;
            sum=sum+x; ex=ex+y;
            // printf("x=%d k=%d\n",x,sum);
            n=x;

        }
        if(ex>=k) sum=sum+(ex/k);
        printf("%d\n",sum);
    }
    return 0;
}
