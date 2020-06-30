#include<stdio.h>
#include<math.h>

int primefactor(long long int n)
{
    int index=0,z=0,i,f[1000],t=1,p[100];

    while(n%2==0)
    {
        f[index++]=2;
        n=n/2;
    }

    for(i=3; i<=sqrt(n); i+=2)
    {
        while(n%i==0)
        {
            f[index++]=i;
            n=n/i;
        }
    }

    if(n>2) f[index]=n;
    if(n<=2) index--;

    int power=1;
    for(i=0;i<=index;i++)
    {
        if(i>0&&f[i]==f[i-1]) power++;
        else if(i>0&&f[i]!=f[i-1]) {p[z++]=power; power=1;}
        if(i==index) p[z]=power;
    }

    int sum=1;
    for(i=0;i<=z;i++)
    {
        sum=sum*(p[i]+1);
    }
    return sum;
}

int main()
{
    long long int n;
    int x;
    while(scanf("%lld",&n)&&n!=0)
    {
        x=primefactor(n);

        if(x%2==0) printf("no\n");
        else if(x%2!=0) printf("yes\n");
    }
    return 0;
}
