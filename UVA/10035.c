#include<stdio.h>
int main()
{
    long long int a,b,x,y;
    while(scanf("%lld%lld",&a,&b)&&a!=0&&b!=0)
    {
        int carry=0,flag=0,z;
        while(a>0||b>0)
        {
            x=a%10; y=b%10;

            if(flag==1) z=x+1+y;
            else if(flag==0) z=x+y;

            if(z>9) {   carry++;  flag=1;  }
            else flag=0;
            a=(a/10);
            b=b/10;
        }
        if(carry==0) printf("No carry operation.\n");
        else if(carry==1 ) printf("1 carry operation.\n");
        else printf("%d carry operations.\n",carry);
    }
    return 0;
}
