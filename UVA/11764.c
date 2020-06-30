#include<stdio.h>
int main()
{
    int t,ts,n,i;
    scanf("%d",&ts);
    for(t=1;t<=ts;t++)
    {
        scanf("%d",&n);
        int a[n],h=0,l=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(i!=0){
                if(a[i]>a[i-1]) h++;
                else if(a[i]<a[i-1]) l++;
            }
        }
        printf("Case %d: %d %d\n",t,h,l);

    }
    return 0;
}
