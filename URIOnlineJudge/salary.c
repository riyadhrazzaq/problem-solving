#include<stdio.h>
int main ()
{
    int a,b;
    float c,salary;
    scanf("%d %d %f",&a,&b,&c);
    printf("NUMBER = %d\n",a);
    salary=b*c;
    printf("SALARY = U$ %.2f\n",salary);
    return 0;
}
