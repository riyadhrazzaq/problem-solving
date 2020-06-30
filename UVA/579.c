#include<stdio.h>
#include<math.h>

int main()
{
    int h,m;
    while(scanf("%d:%d",&h,&m)&&h!=0)
    {
        double x;
        x= ((12-h)*5)*6+(m*6);
        if(m!=00) x=x-(m*.5);
        if(x>180) x=(360-x);

        if(x<0) x=x*(-1);
        if(x>180) x=(360-x);
        printf("%.3lf\n",x);
    }
    return 0;
}
