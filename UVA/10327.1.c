#include<stdio.h>
int main()
{
    int n,i,j;
    while(scanf("%d",&n)==1)
    {

        int a[n],c=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j]) c++;
            }
        }
        printf("Minimum exchange operations : %d\n",c);
    }
    return 0;
}
