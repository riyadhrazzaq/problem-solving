#include<stdio.h>
int main()
{
    int i,b=60;
    for (i=1;i<38;i+=3)   {

        printf("I=%d J=%d\n",i,b);  b=b-5;
    }
    return 0;
}
