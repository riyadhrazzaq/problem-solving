#include<stdio.h>
int main()
{
    float n,avg,sum=0.0;
    int count=0,i;
    for (i=1;i<=6;i++)
    {
        scanf("%f",&n);
        if(n>0){
            sum+=n;
            count++;
        }
        avg=sum/(float)count;
    }
    printf("%d valores positivos\n",count);
    printf("%.1f\n",avg);
    return 0;

}
