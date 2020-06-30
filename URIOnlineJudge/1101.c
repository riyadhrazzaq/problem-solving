#include<stdio.h>
int main()
{
    int i,x,y,um=0;
    while(scanf("%d %d,&x,&y")!=0){
        if(x>y){
            for(i=y;i<=x;i++){printf("%d ",i); printf("Sum=%d",um=um+i;);  } um=0;
        }
        else if(x<y){
            for(i=x;i<=y;i++){printf("%d",i); printf("Sum=%d", um=um+i); } um=0;
        }
    }
    return 0;
}
