#include<stdio.h>

int checkPrime(int num);
int emirp(int num);
int main()
{

  int x,y=0,e=0;
    int num;
    while(scanf("%d",&num)==1)
    {
        x=checkPrime(num);
        if(x==0)
        {
            e=emirp(num);
            if(e!=num)
            {
                y=checkPrime(e);
                if(y==0) printf("%d is emirp.\n",num);
                else if(y!=0) printf("%d is prime.\n",num);
            }
            else if(e==num) printf("%d is prime.\n",num);


        }
        else printf("%d is not prime.\n",num);
    }

    return 0;
}

int checkPrime(int num)
{
    int i,flag=0;
    if(num==1) flag=1;
    for(i=2; i<=num/2; i++)
    {
        if(num%i==0) flag=1;
    }
    return flag;


}

int emirp(int num)
{
    int sum=0;
    while(num!=0)
    {
        sum=sum*10+num%10;
        num=num/10;
    }
    return sum;
}
