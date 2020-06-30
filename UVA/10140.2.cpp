#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
using namespace std;

int const N=1000001;
bool mark[N],fin[1000001];
int i,j,prime[N];
int sieve()
{
    mark[0]=1;
    mark[1]=1;
    for(i=4;i<=N;i+=2)
    {
        mark[i]=1;
    }
    for(i=3;i<=sqrt(N);i+=2)
    {
        if(mark[i]==0)
        {
            for(j=i*2;j<=N;j+=i)
            {
                mark[j]=1;
            }
        }
    }
    int x=0;
    for(i=0;i<=N;i++)
    {
        if(mark[i]==0) prime[x++]=i;
    }
    return x;

}


int main()
{
    int x=sieve();
    int a,b;
    while(scanf("%d%d",&a,&b)==2)
    {
        int fprime[b-a+1],y=0;
        memset(fin,0,sizeof(fin));

        for(i=0;i<x;i++)
        {
            long long int ceil=(a/prime[i] )+ (a%prime[i]!=0);
            ceil=ceil*prime[i];
            if(ceil==prime[i]) ceil=ceil+ceil;
            for(long long j=ceil;j<=b;j+=prime[i])
            {
                fin[j-a]=1;
            }
        }
        for(i=0;i<b-a+1;i++)
        {
            if(fin[i]==0&&(i+a)!=1) fprime[y++]=i+a;
        }


        //min max//

        if(y<=1) printf("There are no adjacent primes.\n");
        else
        {
            int hi=fprime[1]-fprime[0], lo=fprime[1]-fprime[0], d1=fprime[0],d2=fprime[1],c1=fprime[0],c2=fprime[1];
            for(i=0;i<y-1;i++)
            {
                if(fprime[i+1]-fprime[i]>hi){ hi=fprime[i+1]-fprime[i]; d2=fprime[i+1]; d1=fprime[i]; }
                if(fprime[i+1]-fprime[i]<lo){ lo=fprime[i+1]-fprime[i]; c2=fprime[i+1]; c1=fprime[i];}
            }
            printf("%d,%d are closest, %d,%d are most distant.\n",c1,c2,d1,d2);
        }





    }
}
