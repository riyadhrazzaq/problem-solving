#include<bits/stdc++.h>

int main()
{
    int t;
    long long int res,n;
   scanf("%d",&t);
    while(t--)
    {
     scanf("%lld",&n);

        if(n%2==0) res= (n*(n+2)*(2*n+1))/8;
        else res= ((n*(n+2)*(2*n+1))-1)/8;
        printf("%lld\n", res);

    }
}
