#include<stdio.h>
#include<string.h>
#define n 2000000


long long int listofprime[2000000];
int x=0;
long long int twinPrime[100001];
int main()
{
    char prime[n];
    long long int i,j,y=0;
    int num;
    for(i=2; i<n; i++)
    {
        prime[i]='1';
    }
    prime[0]='0';
    prime[1]='0';
    for(i=2; i<n; i++)
    {
        if(prime[i]=='1')
        {
            for(j=i*2; j<n; j+=i)
            {
                prime[j]='0';
            }
        }
    }

    for(i=0; i<n; i++)
    {
        if(prime[i]=='1') listofprime[x++]=i;
    }

    for(i=0; i<x; i++)
    {
        if(listofprime[i]+2==listofprime[i+1]) twinPrime[y++]=listofprime[i];
    }
    printf("x=%d y=%d\n",x,y);
    while(scanf("%d",&num)!=EOF)
    {
        printf("(%lld, %lld)\n",twinPrime[num-1],twinPrime[num-1]+2);

    }

return 0;
}
