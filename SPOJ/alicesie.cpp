#include<stdio.h>
#include<algorithm>
int main()
{
    int t,i,j,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int c= ceil((double)n/2.00);
        printf("%d\n",c);
    }
}
