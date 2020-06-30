#include<stdio.h>
int main()
{
    int i,x,y,sum;
    while(scanf("%d %d",&x,&y)!=0&&x>0&&y>0){
        sum=0; if(x>y){ while(y<=x){
            printf("%d ",y++);
            sum=sum+y;

          }}

          else if(x<y){ while(x<=y){

            printf("%d ",x++);
            sum=sum+x;
          }}
        printf("Sum=%d\n",sum);
    }
    return 0;
}
