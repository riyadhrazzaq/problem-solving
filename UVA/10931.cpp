#include<stdio.h>

int main()
{
    long long int n;
    while(scanf("%lld",&n)==1)
    {
        if(n==0) break;
        else
        {
            int sum=0,i=0;
            char b[100];
            char bin[100];
            long long int x=n;
            while(x!=0)
            {
                sum=sum+(x%2);

                b[i++]=(x%2)+48;
                x=x/2;
            }
            int z=0;
            for(x=i-1; x>=0; x--)
            {
                bin[z++]=b[x];
            }
            bin[z]='\0';


            printf("The parity of %s is %d (mod 2).\n",bin,sum);
        }

    }
    return 0;
}
