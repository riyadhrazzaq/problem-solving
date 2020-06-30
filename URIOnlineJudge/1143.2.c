#include<stdio.h>
#include<math.h>

int main()
{
    int n,i,j,q;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
            printf("%d",i);
        for(j=2;j<=3;j++){
            printf(" %.0lf",pow(i, j));
        }
        printf("\n");
    }
    return 0;
}
