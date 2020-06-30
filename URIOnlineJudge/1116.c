#include<stdio.h>
int main()
{
    int n,x,y,i;
    scanf("%d",&n);
    double div;
    for(i=1;i<=n;i++){
            scanf("%d %d",&x,&y);
            if(y==0){printf("divisao impossivel\n"); }

           else{
                div=(double)x/y;

        printf("%.1lf\n",div);

        }
    }
    return 0;
}
