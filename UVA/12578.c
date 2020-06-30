#include<stdio.h>
#define Pi acos(-1)

int main()
{
    int t,ts;
    double a,g,r,b,l;
    scanf("%d",&ts);
    for(t=1;t<=ts;t++)
    {
        scanf("%lf",&l);
        a=l/5;
        r=Pi*(a*a);
        b=(6*l)/10;
        g=b*l;
        printf("%.2lf %.2lf\n",r,g-r);

    }
    return 0;
}
