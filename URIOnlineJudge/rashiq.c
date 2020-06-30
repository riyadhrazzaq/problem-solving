#include<stdio.h>

int main()

{
    int N,X,Y,i,j,sum=0;

    scanf("%d",&N);

    for(i=0;i<N;i++){
        scanf("%d %d",&X,&Y);
        if(X>Y){
        for(j=Y+1;j<X;j++){

        if(j%2!=0)

            sum=sum+j;
     }
  }
        else if(Y>X){
        for(j=X+1;j<Y;j++){

        if(j%2!=0)

            sum=sum+j;
    }
    }
     printf("%d\n",sum);
     sum=0;
    }

    return 0;
}
