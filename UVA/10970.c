#include<stdio.h>
int main()
{
    int r,c;
    while(scanf("%d%d",&r,&c)==2)
    {
        printf("%d\n",((r-1)+(c-1)*r));
    }
    return 0;
}
