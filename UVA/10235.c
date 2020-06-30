#include<stdio.h>
int checkPrime(int n);
int reverseIt(int n);
int main()
{
    int n,x;
    while(scanf("%d",&n)==1)
    {
        if(checkPrime(n)==1) {

            x=reverseIt(n);
            if(n!=x)
            {
            if(checkPrime(x)==1){ printf("%d is emirp.\n",n);}
            else printf("%d is prime.\n",n);
            }
            else printf("%d is prime.\n",n);

        }
        else if(checkPrime(n)==0) printf("%d is not prime.\n",n);
    }
    return 0;
}

int checkPrime(int n)
{
    int f=1,i;
    if(n==2) f=1;
    else if(n%2==0||n==1) f=0;
    else
    {
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0){ f=0; break;}
        }
    }
    if(f==1) return 1;
    else return 0;
}

int reverseIt(int n)
{
    int sum=0;
    while(n!=0)
    {

        sum=sum*10+n%10;
        n=n/10;
    }
    return sum;
}
