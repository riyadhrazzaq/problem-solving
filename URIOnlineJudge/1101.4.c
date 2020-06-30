#include<stdio.h>
int main()
{
    int M,N,i,sum;
    while(scanf("%d %d",&M,&N)!=0&&M>0&&N>0){sum=0;
        if(M>N){i=M; M=N;N=i; }
        for(i=M;i<=N;i++){
            printf("%d ",i); sum=sum+i;
        }
        printf("Sum=%d\n",sum);
    }
    return 0;
}
