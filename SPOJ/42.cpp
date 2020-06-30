#include<stdio.h>
#include<math.h>

int main()
{
    int t,a,b,z;
    scanf("%d",&t);
    while(t--&&t>=0)
    {
        scanf("%d%d",&a,&b);
        int x=0;
        while(a/10!=0)
        {
            x=x*10+(a%10);
            a=a/10;
        }
        x=(x*10)+a%10;
        int y=0;
        while(b/10!=0)
        {
            y=y*10+(b%10);
            b=b/10;
        }
        y=(y*10)+b%10;
        z=x+y;
        int r=0;
        while(z/10!=0)
        {
            r=r*10+(z%10);
            z=z/10;
        }
        r=(r*10)+z%10;
        printf("%d\n",r);
    }


}
