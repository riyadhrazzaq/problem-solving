#include<stdio.h>
int main()
{
    int n,i;
    while(scanf("%d",&n)&&n!=0){
        for(i=1;i<n;i++){
        printf("%d ",i);
        }
        printf("\n",i);
    }
    return 0;
}
