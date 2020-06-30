#include<stdio.h>
int checkPrime(long long int num);
int main()
{
    long long int n=1,c=1,i,flag,x;
    while(c!=10)
    {
        n++;
        flag=0;
        if(n>5&&checkPrime(n)==0) break;
        else
        {
            for(i=2; i<n/2; i++)
            {
                if(n%i==0&&i>5)
                {
                    if(checkPrime(i)==0) break;
                    else if(checkPrime(i)!=0)
                    {
                        while(i)
                    }
                }
            }
        }

        if(flag==0) c++;
    }
    printf("The 1500'th ugly number is %lld.\n",n);
}
int checkPrime(long long int num)
{
    long long int i,flag=0;
    if(num==1) flag=1;
    for(i=2; i<num; i++)
    {
        if(num%i==0) flag=1;
    }
    return flag;


}
