#include<stdio.h>
int main()
{
    int n,x,y,sum=0,i;
    scanf("%d %d",&x,&y);
    if(x>y){
        i=x;
        x=y;
        y=i;
    }
    for(i=x;i<=y;i++){
        if(i%13!=0){sum=sum+i; }
    }
    printf("%d\n",sum);

}
