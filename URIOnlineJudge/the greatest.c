#include<stdio.h>
int main ()
{
    int a,b,c,d;
    scanf("%d %d %d",&a,&b,&c);
    d=(a+b+abs(a-b))/2;
    printf("%d eh o maior\n",(d+c+abs(d-c))/2);
    return 0;
}