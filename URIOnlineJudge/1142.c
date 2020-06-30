#include<stdio.h>
int main()
{
    int n,i,j,x=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=3;j++){
            printf("%d ",x); x++;
        }
        printf("PUM");
        printf("\n");
        x++;
    }
    return 0;
}
