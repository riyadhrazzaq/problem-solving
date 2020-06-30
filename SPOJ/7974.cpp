#include<stdio.h>
int main()

{
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c))
    {
        if(a==0&&b==0&&c==0) break;
        else if( b-(a-b)==c )
        {
            printf("AP %d\n",c-(a-b));
        }
        else {
            printf("GP %d\n", c*(b/a));
        }
    }
    return 0;
}
