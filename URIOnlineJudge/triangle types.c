#include<stdio.h>
int main()
{
    double a,b,c,d,gtst;
    scanf("%lf %lf %lf",&a,&b,&c);
    d=(a+b+abs(a-b))/2;
    gtst=(d+c+abs(d-c))/2;
    gtst=a;
    if(a>=(b+c)) {printf("NAO FORMA TRIANGULO\n");}
    if(a*a==(b*b+c*c)) {printf("TRIANGULO RETANGULO\n");}
    if(a*a>(b*b+c*c)) {printf("TRIANGULO OBTUSANGULO\n");}
    if(a*a<(b*b+c*c)) {printf("TRIANGULO ACUTANGULO\n");}

    if (a==b&&b==c){printf("TRIANGULO EQUILATERO\n"); }
    if (a==b||b==c){printf("TRIANGULO ISOCELES\n");}

    return 0;
}




