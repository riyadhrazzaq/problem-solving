#include<stdio.h>
int main()
{
    int n,A,B,D,C;
    scanf("%d",&n);

    A=n%10;
    B=n/1000;
    C=n/100%10;
    D=n%100/10;
    printf("%d%d%d%d",A,D,C,B);
    return 0;
}
