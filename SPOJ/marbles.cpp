#include<bits/stdc++.h>
using namespace std;

long long nCr(int n, int k) {
    if(k > n-k) k = n - k;
    long long ans = 1;
    int i;
    for(i = 0; i < k; i++) {
        ans = ans* (n-i)/(i+1);
    }
    return ans;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k;
        scanf("%d%d",&n,&k);
        printf("%lld\n",nCr(n-1,k-1));

    }
    return 0;
}
