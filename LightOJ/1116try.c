#include<stdio.h>
int main()
{
    long long int w,j;
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%lld",&w);
        for(j=2;j<=w;j*=2){
            if(w%j==0&&(w/j)%2!=0) { printf("Case %d: %lld %lld\n",i,(w/j),j); break;}
            if(w%j!=0||w/j==0) {printf("Case %d: Impossible\n",i); break;}
        }

    }
    return 0;
}
