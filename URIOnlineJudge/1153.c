#include<stdio.h>
int main()
{
    int n,i,fact=1,c=0;
    scanf("%d",&n);
    for(i=1;i<n;i++){
        fact=fact*(n-c);
        c++;
    }

printf("%d\n",fact);
    return 0;
}
