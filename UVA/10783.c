#include<stdio.h>
int main()
{
    int a,b,t,i,s,k;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d%d",&a,&b);
        s=0;
        for(k=a;k<=b;k++){
            if(k%2!=0) s=s+k;
        }
        printf("Case %d: %d\n",i,s);
    }
    return 0;
}
