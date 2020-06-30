#include<stdio.h>
int main()
{
    int i,n,high=-1,pos=1;

    for(i=0;i<5;i++){
        scanf("%d",&n);
        if(n>high){high=n; pos++;}
    }
        printf("\n%d\n%d\n",high,pos);
    return 0;
}
