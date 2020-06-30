#include<stdio.h>
int main()
{
    int i,n,a,in=0,out=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a);
        if(a>=10&&a<=20){in++;}
        else {out++;}
    }
    printf("%d in\n%d out\n",in,out);
    return 0;
}
