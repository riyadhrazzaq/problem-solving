#include<stdio.h>
int main()
{
    int i,j,a[20],c=0;
    for(i=0; i<20; i++)
    {
        scanf("%d",&a[i]);
    }

    for(j=20; j>0; j--)
    {
        printf("N[%d] = %d\n",c,a[19-c]);
        c++;
    }
    return 0;
}
