#include<stdio.h>
int main()
{
    int i;
    float s=0;
    for(i=1;i<=100;i++){
        (float)s=s+1/i;
    }
    printf("%.2f\n",s);
}
