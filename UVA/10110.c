#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)&&n!=0)
    {
        int f=0,i,c=0;
        if(n%2!=0)
        {
            for(i=1; i<=n; i+=2)
            {
                if(n%i==0)
                {
                    if(f==0) f=1;
                    else f=0;
                }
                printf("%d ",f);

            }
        }
        else
        {
            for(i=1; i<=n; i++)
            {
                if(n%i==0)
                {
                    if(f==0) f=1;
                    else f=0;
                }

            }
        }

        if(f==1) printf("yes\n");
        else printf("yes\n");
    }
    return 0;
}
