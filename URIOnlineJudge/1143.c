#include<stdio.h>
int main()
{
    int n,i,j,x=1,y;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            printf("%d ",x);
        for(j=1;j<=3;j++){
            y=x;
            printf("%d ",y*y); y=y*y;
        }

        printf("\n");
        x++;
    }
    return 0;
}
