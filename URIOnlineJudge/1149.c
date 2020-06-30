#include<stdio.h>
int main()
{
    int i,a,n,sum;
    scanf("%d%d",&a,&n);
    if(n<=0)
    {
        do
        {scanf("%d",&n);}
        while( n<=0 );
    }
    sum=0;
    for(i=a;i<n+a;i++){
        sum=sum+i;
    }
    printf("%d\n",sum);


    return 0;
}

