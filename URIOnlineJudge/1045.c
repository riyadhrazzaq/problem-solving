#include<stdio.h>
int main()
{
    float n,a,i=0,b;
    scanf("%f",&n);

    while(n>=1){
        a=n/2;
        n=a;
        b=(int)a%2;
        if(b==1) i++;
        printf("%.1f %.1f\n",a,b);

    }

    return 0;
}
