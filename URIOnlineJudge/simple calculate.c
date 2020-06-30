#include<stdio.h>
int main ()
{
    int c1,c2,u1,u2;
    float p1,p2;
    scanf("%d %d %f",&c1,&u1,&p1);
    scanf("%d %d %f",&c2,&u2,&p2);
    printf(" Valor a pagar: R$ %.2f\n",(u1*p1)+(u2*p2));
    return 0;
}
