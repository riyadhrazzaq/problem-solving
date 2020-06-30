#include<stdio.h>
int main()
{
    int n,c=0,i,j;
    scanf("%d",&n);
    for(i=1;i*i<= n;i++)
    {
        c+= (n/i)-i+1;
    }
    printf("%d\n",c);
}
