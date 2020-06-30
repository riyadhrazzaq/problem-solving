#include<stdio.h>
int main()
{
    int i,a,b,sum=0,m;
    scanf("%d %d",&a,&b);
    if(b%2==0){m=b+1;
    for (i=m;i<a;i=i+2){
    sum=sum+i;
    }
    printf("%d\n",sum);
}
    else if (b%2!=0){
        for(i=b+2;i<a;i+=2){
    sum=sum+i;
    }
    printf("%d\n",sum);
    }
    else if (a==b){printf("0\n");}


    return 0;
}
