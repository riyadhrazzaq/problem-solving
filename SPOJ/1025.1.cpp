#include<stdio.h>
#include<algorithm>

using namespace std;

int main()
{
    int t,n,i;
    scanf("%d",&t);
    while(t--&&t>=0)
    {
        scanf("%d",&n);
        int a[n],b[n];
        long long int sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            scanf("%d",&b[i]);
        }
        sort(a,a+n);
        sort(b,b+n);

        for(i=0;i<n;i++)   sum+= (a[i]*b[i]);

        printf("%lld\n",sum);
    }
    return 0;
}

