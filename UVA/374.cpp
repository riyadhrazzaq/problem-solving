#include<bits/stdc++.h>
using namespace std;

long long fastMod(long long a, long long b, long long c)
{
    if(b==0) return 1;
    else if(b%2==0)
    {
        long long temp= fastMod(a,b/2,c);
        return ((temp%c)*(temp%c))%c;
    }
    else
    {
        return (a %c*( fastMod(a,b-1,c) %c)) %c;
    }
}

int main()
{
    long long a,b,c;
    while(scanf("%lld%lld%lld",&a,&b,&c)==3)
    {
        printf("%lld\n",fastMod(a,b,c));
    }
    return 0;
}

