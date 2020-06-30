#include<stdio.h>
#include<math.h>
int main()
{
    int t;

    double res,s,a,b,c,d;
    scanf("%d",&t);
    while(t--){
        scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
        s = (a+b+c+d)/2;
        res = sqrt((s-a)*(s-b)*(s-c)*(s-d) );
        printf("%.2f\n",res);

    }
}
