#include<bits/stdc++.h>
using namespace std;

unordered_set<int> factor;
void uniquePrimeFact(int n)
{
    int limit = sqrt(n), idx=0,i;
    if(n==2) factor.insert(2);
    while(n%2==0)
    {
        factor.insert(2);
        n/=2;

    }
    for(i=3; i<=limit; i+=2)
    {
        while(n%i==0)
        {
            factor.insert(i);

            n/=i;
        }
    }
    if(n>1) factor.insert(n);
}

int main()
{
    int t=10,n;
    int sum;

    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        sum= (float)n;
        uniquePrimeFact(n);

        for( const int&x: factor )
        {
           sum = sum * ( ((float)x-1)/(float) x );

        }
        printf("%d\n",sum);
        factor.clear();
    }
}
