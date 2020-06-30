#include<stdio.h>
int main()
{
    int i,j,k=1,x;
    scanf("%d",&x);
    for(i=1; i<=x*2;i++)
    {
        for(j=1;j<3;j++)
        {
            printf("%d ",k); k=k*k;
        }
        printf("%d\n",k=k*j);

    }
    return 0;
}
