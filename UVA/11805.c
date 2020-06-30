#include<stdio.h>
int main()
{
    int ts,i,j,n,k,p,c;
    scanf("%d",&ts);
    for(i=1;i<=ts;i++){
        scanf("%d%d%d",&n,&k,&p);
        c=k;
        while(p--){
            c++;
            if(c>n) c=1;
        }
        printf("Case %d: %d\n",i,c);
    }
    return 0;
}
