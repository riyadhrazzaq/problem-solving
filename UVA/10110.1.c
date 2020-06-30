#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)&&n!=0)
    {
        int f=1,i;
        if(n==1) f=0;
        for(i=2;i<=n/2;i++)
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
    return 0;

}
