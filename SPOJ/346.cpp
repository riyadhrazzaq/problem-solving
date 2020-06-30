#include<bits/stdc++.h>
using namespace std;

map<long long,long long>res;

long long byte(long int n)
{
    if(n==0) return 0;
    //if(n<12) res[n]=n;
    if(res[n]!=0) return res[n];
    else
    {
        res[n] = byte(n/2)+ byte(n/3)+ byte(n/4);
    }

    if(res[n]<n) res[n]=n;
    return res[n];
}

int main()
{
    long long int n;


    while(scanf("%lld",&n)==1)
    {
        printf("%lld\n",byte(n));
    }

}
