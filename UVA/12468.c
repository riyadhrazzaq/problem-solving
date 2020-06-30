#include<stdio.h>
int main()
{
    int a,b,i,c;
    while(scanf("%d%d",&a,&b)&&a>=0&&b>=0)
    {
        c=abs(b-a);

        if(c>50) c=100-c;


        printf("%d\n",abs(c));
    }
}

