#include<stdio.h>
int main()
{
    int i, n,a=0,b=1,c=1;
    for(i=0;i<3;i++){


        printf("I=%d J=%d\n",a,b); b++; a=b- ++c;

    }


    return 0;
}
