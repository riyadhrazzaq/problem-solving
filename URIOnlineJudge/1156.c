#include<stdio.h>
int main()
{
   long long double i,j=1,s=0;
    for(i=1;i<40;i+=2){

        s=s+j/j;
        j=j*2;
        printf("%.1lf\n",j);
    }
    printf("%.2lf\n",s);
    return 0;
}
