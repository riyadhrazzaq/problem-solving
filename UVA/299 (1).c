#include<stdio.h>
int main()
{
    int ts,i;
    scanf("%d",&ts);
    for(i=1; i<=ts; i++)
    {
        int n,count=0;
        scanf("%d",&n);
        int a[n],j,k,m,temp,max;
        for(j=0; j<n; j++)
        {
            scanf("%d",&a[j]);
        }

        for(m=0; m<n; m++)
        {
            for(k=m+1; k<n; k++)
            {
                if(a[m]>a[k])
                {
                    temp=a[m];
                    a[m]=a[k];
                    a[k]=temp;
                    count++;
                }
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
