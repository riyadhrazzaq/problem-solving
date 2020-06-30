#include<bits/stdc++.h>
using namespace std;



bool sumOfTwo(long long n)
{
    int i;
    long long m =n;
    int lim = sqrt(n)+1;
    for(i=2; i<=lim; i++ )
    {
        if(n%i==0)
        {
            int cunt = 0;
            while(n%i==0)
            {
                cunt++;
                n/=i;
            }
            if(cunt%2!=0&& (i-3)%4==0) return false;
        }
    }
    if((n-1)%4!=0 ) return false;
    return true;
}

int main()
{
    int t;
    long long n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld",&n);

        if(n==0||sumOfTwo(n)) printf("Yes\n");
        else printf("No\n");
    }
}
