#include<stdio.h>
int main()
{
    int t,ts,n,i,j;
    scanf("%d",&ts);
    for(t=1;t<=ts;t++)
    {
        scanf("%d",&n);
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
        printf("%d\n",c);
    }
    return 0;
}
