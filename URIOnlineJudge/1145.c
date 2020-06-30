#include<stdio.h>
int main()
{
    int i,j,k=1,x,y;
    scanf("%d%d",&x,&y);
    for(i=1; i<=y/x; i++)
    {
        for(j=1; j<x;j++)
        {
            printf("%d ",k); k++;
        }
        printf("%d\n",k++);

    }
    return 0;
}
