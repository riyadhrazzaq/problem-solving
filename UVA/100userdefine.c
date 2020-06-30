#include<stdio.h>
int wtf(long long int n);
int main()
{
    long long int x,y,max,temp,b,d;
    while(scanf("%lld%lld",&x,&y)!=EOF){
        b=x; d=y;
        long long int k=-1,a,i,max=-1;
        if(x>y) {temp=x;x=y;y=temp;}
        for(i=x;i<=y;i++){

        a=wtf(i);
        if(a>max) max=a;
        }


      printf("%lld %lld %lld\n",b,d,max);
    }
    return 0;
}
int wtf(long long int n)
{
    int c=0;
    if(n==1)
    {
        c=1;
    }
    else
    {
        while(n!=1)
        {
            c++;
            if(n%2!=0){
                n=(3*n)+1;
            }
            else if(n%2==0){
                n=n/2;
            }
        }
        c++;
    }
    return c;
}



