#include<stdio.h>
#include<bitset>
using namespace std;

int fun( unsigned long long n )
{
    bitset<64>b(n);             //using STL
    return b.count();
}

int customFun(unsigned long long n)
{
    int c=0;
    for(int i=1;i<=64;i++)              //manually checking all bits and counting
    {
        if( (n>>i & 1)==1 ) c++;         // using right shift
    }
    return (c==1)? 1: 0;
}
int anotherCustomFun(unsigned long long n)
{
    int c=0;
    while(n)
    {
        n=( n& (n-1));
        c++;
    }
    return (c==1)? 1: 0;
}
int main()
{
    while(1)
    {
        unsigned long long n;
        scanf("%llu",&n);

        int r= anotherCustomFun(n);
        if(r==1) printf("TAK\n");
        else  printf("NIE\n");
    }

}
