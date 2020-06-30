#include<stdio.h>
int main()
{
    int a,sum=0,c=0;
    while(scanf("%d",&a)&&a>0){
        sum=sum+a;
        c++;
    }
    printf("%.2f\n",(float)sum/c);
    return 0;
}
