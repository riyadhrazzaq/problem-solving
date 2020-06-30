#include<stdio.h>
int main()
{
    int t,ts,a,b,c,temp;
    scanf("%d",&ts);
    for(t=1;t<=ts;t++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a>b&&a>c)
        {
            temp=a;
            a=c;
            c=temp;
        }
        else if(a<b&&b>c)
        {
            temp=b;
            b=c;
            c=temp;
        }




        if((a+b)>c) printf("OK\n");
        else printf("Wrong!!\n");
    }
    return 0;
}
