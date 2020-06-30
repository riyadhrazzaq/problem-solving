#include<stdio.h>
int main()
{
    int n,a[1000],j,i;
    scanf("%d",&n);
    for(i=0; i<1000;i++)
    {
        for(j=0; j<n; j++)
        {
            printf("N[%d] = %d\n",i,j); i++;if(i>999) {break;}
        }
        i--;


    }
return 0;
}
