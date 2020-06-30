#include<stdio.h>
#include<math.h>

int main()
{
    long long int a,b,i,c;
    while(scanf("%lld%lld",&a,&b)&&a!=0&&b!=0)
    {
        double x;
        c=0;
        for(i=a; i<=b; i++)
        {
            x= sqrt(i);
            if(fmod(x,1)==0) c++;
        }

        printf("%lld\n",c);
    }
    return 0;
}
