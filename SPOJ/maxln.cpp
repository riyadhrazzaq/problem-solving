#include<stdio.h>
int main()
{
    int t,i;
    int r;
    double s;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lf",&r);
        s = (1.00/4.00) + ( 4.00 * (double) r * (double) r);
        printf("Case %d: %.2lf\n",i,s);
    }

}
