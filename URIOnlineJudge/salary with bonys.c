#include<stdio.h>
int main ()
{
    char c;
    float a,b;
    scanf("%s %f %f",&c,&a,&b);
    printf("TOTAL = R$ %.2f\n",(b*15/100)+a);
    return 0;

}
