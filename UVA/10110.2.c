#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)&&n!=0)
    {
        if(n==1) puts("yes");

        else if(n%2!=0)
        {
            int i,f=0;
            for(i=1; i<=n/2; i+=2)
            {
                if(n%i==0)
                {
                    if(f==0) f=1;
                    else f=0;
                }
            }
            if(f==0) puts("no");
            else puts("yes");
        }
        else
        {
            int f=1,i;

            for(i=2; i<=n/2; i++)
            {
                if(n%i==0)
                {
                    if(f==1) f=0;
                    else if(f==0) f=1;
                }
            }
            if(f==1) puts("no");
            else if(f==0) puts("yes");
        }

    }
    return 0;

}
