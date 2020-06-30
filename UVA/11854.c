#include<Stdio.h>
int main()
{
    int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c)&&a!=0&&b!=0&&c!=0){
            if(a*a==(b*b+c*c)||b*b==(a*a+c*c)||c*c==(b*b+a*a)) printf("right\n");
            else printf("wrong\n");
    }
    return 0;
}
