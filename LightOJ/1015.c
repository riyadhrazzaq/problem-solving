#include<stdio.h>
int main()
{
    int t,n,a,s,i,j;
    scanf("%d",&t);

    for(i=1; i<=t; i++)
    {

        scanf("%d",&n);
        s=0;

        for(j=1; j<=n; j++)
        {
            scanf("%d",&a);
            if(a>0)
            {
                s=s+a;
            }
        }
        printf("Case %d: %d\n",i,s);
    }
    return 0;
}
