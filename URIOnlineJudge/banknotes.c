#include<stdio.h>
#include<math.h>
int main ()
{
    double x,fracpart,intpart;
    scanf("%lf",&x);
    fracpart=modf(x,&intpart);
    printf("%.0lf nota(s) de U$ 100\n",intpart);
    return 0;
}
