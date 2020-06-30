#include<stdio.h>
int main()
{
    int i,j=7,k=9,s=11,u=13,t=15;
    for(i=1;i<=3;i++){
        printf("I=1 J=%d\n",j); j--;
    }
    for(i=1;i<=3;i++){
        printf("I=3 J=%d\n",k); k--;
    }
    for(i=1;i<=3;i++){
        printf("I=5 J=%d\n",s); s--;
    }
    for(i=1;i<=3;i++){
        printf("I=7 J=%d\n",u); u--;
    }
    for(i=1;i<=3;i++){
        printf("I=9 J=%d\n",t); t--;
    }
    return 0;
}
