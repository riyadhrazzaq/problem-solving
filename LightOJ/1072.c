#include<stdio.h>
#include<math.h>
int main()
{
    double n,rad,r,a,pi;
    int i,ts;
    scanf("%d",&ts);
    pi=acos(-1.0);
    for(i=1; i<=ts; i++)
    {
        scanf("%lf%lf",&rad,&n);
        a=(90-(360/(2*n)))*(pi/180);
        r=(rad*cos(a))/(1+cos(a));
        printf("Case %d: %.10lf\n",i,r);
    }
    return 0;
}
