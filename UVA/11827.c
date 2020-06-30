#include<stdio.h>
int main()
{
    int ts,n,k,i,a,b,x;
    scanf("%d",&ts);
    for(i=1;i<=ts;i++){
        scanf("%d%d",&a,&b);
        int temp=0;
        while(a!=0){
            x=b%a;
            temp=x;
            b=a;
            a=temp;
        }
        printf("%d\n",b);
    }



    return 0;
}
