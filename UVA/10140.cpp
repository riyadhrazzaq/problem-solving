#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
using namespace std;

int const N = 1000000;
int i,j,x;
bool mark[N],fnl[N];
int prime[100000];
int fprime[N];
void sieve()
{
    mark[0]=1;
    mark[1]=1;
    for(i=4; i<=N; i+=2)
    {
        mark[i]=1;

    }

    for(i=3; i<=sqrt(N); i+=2)
    {
        if(mark[i]==0)
        {
            for(j=i+i; j<=N; j+=i)
            {
                mark[j]=1;
            }
        }
    }

    for(i=2; i<=N; i++)
    {
        if(mark[i]==0) prime[x++]=i;
    }
}


int main()
{
    sieve();
    int a,b;
    while(scanf("%d%d",&a,&b)==2)
    {
        memset(fnl,0,sizeof(fnl));

        for( i=0; i<x; i++)
        {
            long long int cel= ((a/prime[i])+(a%prime[i]!=0) );
            cel*=prime[i];
            if( cel == prime[i] ) cel = cel+cel;
            for(long long int j=cel; j<=b; j+=prime[i])
            {
                fnl[j-a]=1;
            }
        }
        int y=0;
        for(i=0; i<b-a+1; i++)
        {
            if(fnl[i]==0) fprime[y++]=i+a;
        }
        printf("y= %d\n",y);
        int maxx,mi,c1,c2,d1,d2;

        if(y==2) printf("There are no adjacent primes.\n");
        else
        {
            maxx=fprime[1]-fprime[0];
            d1=fprime[0]; d2=fprime[1];
            c1=fprime[0]; c2=fprime[1];

            mi=fprime[1]-fprime[0];

            for(i=0; i<y-1; i++)
            {
                if(fprime[i+1]-fprime[i]>maxx)
                {
                    maxx=fprime[i+1]-fprime[i];
                    d1=fprime[i];
                    d2=fprime[i+1];
                }
                if(fprime[i+1]-fprime[i]<mi)
                {
                    mi=fprime[i+1]-fprime[i];
                    c1=fprime[i];
                    c2=fprime[i+1];
                }
            }
            printf("%d,%d are closest, %d,%d are most distant.\n",c1,c2,d1,d2);
        }



    }
    return 0;
}
