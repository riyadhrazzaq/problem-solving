#include<stdio.h>
int main()
{
    long long int n;
    int sum,x;
    while(scanf("%d",&n)!=0)
    {
        sum=0;
        while(sum>9)
        {
         while(n!=0)
            {
                x=n%10;
                sum=sum+x;
                n=n/10;
            }
             if(sum<=9) {printf("%d\n",sum); break;}
             else n=sum;
        }

    }
return 0;
}

