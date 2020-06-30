#include<stdio.h>
int main()
{
    int n,c=0,p,m;
    while(scanf("%d",&n)&&n>0&&n<10001){
            p=0;
            c++;
            m=1;
            while(m<n){
                m=2*m;
                p++;
            }
        printf("Case %d: %d\n",c,p);
    }
    return 0;
}
