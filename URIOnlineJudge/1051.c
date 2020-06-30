#include<stdio.h>
int main()
{
    double a,tax,tx;
    scanf("%lf",&a);
    if (a<=2000){printf("Isento\n");}
    else if(a>2000&&a<=3000){printf("R$ %.2lf",(a-2000)*.08);}
    else if(a>2000&&a<=4500){tx=(a-3000)*.18+1000*.08;printf("R$ %.2lf",tx);}
    else if(a>4500){

        printf("R$ %.2lf",(a-4500)*.28+(1500*.18)+(1000*.08));
    }
    return 0;
}
