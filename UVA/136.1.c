#include<stdio.h>
int checkPrime(long long int num);

int main()
{
    long long int i,c=1,n=1,f,x;
    while(c!=1500)
    {

        n++;
        f=0;
        if(n>5&&checkPrime(n)==0) f=1;
        else if(n>5||n<5)
        {
            for(i=2; i<=n/2; i++)
            {
                if(n%i==0)
                {
                    x=i;
                    while(x>=7)
                    {
                        if(x%2==0) x/=2;
                        else if(x%3==0) x/=3;
                        else if(x%5==0) x/=5;
                        else if(x%7==0) {x/=7; f=1;}
                        else {f=1; break;}
                    }
                }
            }
        }

        if(f==0) {c++; printf("%lld\n",c);}

    }

    printf("%lld\n",n);



    return 0;
}

int checkPrime(long long int num)
{
    long long int i,flag=0;
    if(num==1) flag=1;
    for(i=2; i<=num/2; i++)
    {
        if(num%i==0) flag=1;
    }
    return flag;
}

