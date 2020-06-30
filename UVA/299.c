#include<stdio.h>
int main()
{
    int ts,n,i;
    scanf("%d",&ts);
    for(i=1; i<=ts; i++)
    {
        scanf("%d",&n);
        int k,a[n],temp,j,max,count=0;

        for(k=0; k<n; k++)
        {
            scanf("%d",&a[k]);
        }
        max=(n*(n-1))/2;

        for(k=1;k<=max;k++)
        {

            for(j=0;j<n;j++){
                if(a[j]>a[j+1]){
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                    count++;
                }
            }
        }

       printf("%d Optimal train swapping takes %d swaps.\n",,count);
    }
    return 0;
}
