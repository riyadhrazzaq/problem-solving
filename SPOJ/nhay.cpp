#include<bits/stdc++.h>
using namespace std;

long long M= 1000007, B = 364;

long long mod(long long a,long long b)  //calculates a%b
{
    return (a%b+b)%b;
}

void rabin_karp(string text,string pat)
{
    long long n= text.length(), m= pat.length();
    if(n<m) return;
    long long p=0,t=0,i,k,power=1;

    for(i=0;i<m;i++)
    {
        p =( B * p + pat[i] ) % M ;
        t =( B * t + text[i] ) % M ;
    }

    for(i=1;i<=m-1;i++)
    {
        power = mod( power*B, M);
    }
    for(i=0;i<=n-m ;i++)
    {
        if(p==t)
        {
            int f=1,x;
            for(k=i,x=0;k< i+m; k++)
            {
                if(pat[x++]!=text[k]) f=0;
            }
            if(f==1) printf("%lld\n",i);
        }
        else
        {
            t = mod( B*( t - ( text[i]*power)) + text[i+m] , M);
        }
    }

}
int main()
{
    long long t,n;
    string pat,text;
    while(scanf("%d",&t)==1)
    {
        scanf("%lld",&n);
        getline(cin,pat);
        getline(cin,text);
        rabin_karp(text,pat);
        printf("\n");

    }
}

