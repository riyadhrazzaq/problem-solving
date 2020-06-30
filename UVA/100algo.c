#include<stdio.h>
int main()
{
    int n,c=0;
    scanf("%d",&n);
    if(n==1)
    {
        printf("%d\n",n);
        c=1;
    }
    else
    {
        while(n!=1)
        {
            printf("%d ",n);
            c++;
            if(n%2!=0)
            {
                n=(3*n)+1;
            }
            else if(n%2==0)
            {
                n=n/2;
            }
        }
        c++;
        printf("\n%d\n",c);
    }

    return 0;
}
