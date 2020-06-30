#include<stdio.h>
#include<math.h>

int checkPrime(int n)
{
    int j,f= 1;

    for(j=2; j <= n/2; ++j)
    {
        if (n%j == 0)
        {
            f=0;
            break;
        }
    }
    return f;
}
int main()
{
    int n,i;
    while(scanf("%d",&n)&&n!=0)
    {
        for(i=2;i<=n/2;i++)
        {
            if(checkPrime(i)==1)
            {
                if(checkPrime(n-i)==1) {printf("%d = %d + %d\n",n,i,n-i); break;}
            }
        }
    }
    return 0;
}
