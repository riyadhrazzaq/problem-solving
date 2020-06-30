#include<stdio.h>
int main()
{
    int n,i,j,total;
    while(scanf("%d",&n)!=EOF)
    {
       long long int a[n],temp,min,x,y ;
        for(i=0; i<n; i++)
        {
            scanf("%lld",&a[i]);
        }
        scanf("%d",&total);
        min=999999;
        for(i=0; i<n; i++)
        {
            if(i>0)
            {
                for(j=0; j<i; j++)
                {
                    if((a[i]+a[j])==total) {

                        if(abs(a[i]-a[j])<min) {min=abs(a[i]-a[j]); x=a[i]; y=a[j];}
                    }
                }
            }

        }
        if(x>y){
            temp=x; x=y; y=temp;
        }
        printf("Peter should buy books whose prices are %lld and %lld.\n\n",x,y);

    }
    return 0;
}
