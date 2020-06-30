#include<stdio.h>
int main()
{
    int i,n,e=0;
    for(i=1;i<6;i++){
    scanf("%d",&n);
    if(n%2==0){
       e++;
    }

    }
    printf("%d valores pares\n",e);
    return 0;
}
