#include<stdio.h>
int main()
{
    int n,t=1,i;
    while(scanf("%d",&n)&&n!=0)
    {
        int h[n],sum=0,x,c=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&h[i]);
            sum=sum+h[i];
        }
        x=sum/n;
        for(i=0;i<n;i++)
        {
            if(h[i]>x) c=c+(h[i]-x);
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",t++,c);

    }
    return 0;
}
