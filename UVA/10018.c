#include<stdio.h>
long long int revit(long long int n);
int main()
{
    long long int n,N,add;
    int ts,t,c;
    scanf("%d",&ts);
    for(t=1; t<=ts; t++)
    {
        c=0;
        scanf("%lld",&n);
        N=revit(n);

        do
        {
            c++;
            add=N+n;
            N=revit(add);
            n=add;

        }while(N!=n);
        printf("%d %lld\n",c,n);

    }
    return 0;
}
long long int revit(long long int n)
{
   long long int x,rev=0;
    while(n!=0)
    {
        x=n%10;
        rev=(rev*10)+x;
        n=n/10;
    }
    return rev;
}
