#include<stdio.h>
int main()
{
    long long int y1,y2;
    int n,i,j,c,d1,d2;
    int x,y,z,a;
    char m1[10],m2[10],s[]="January",f[]="February";

    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        c=0;
        scanf("%s%d,%lld %s%d,%lld",&m1,&d1,&y1,&m2,&d2,&y2);
        x=strcmp(m1,s);
        y=strcmp(m1,f);
        z=strcmp(m2,s);
        a=strcmp(m2,f);


        if(x!=0&&y!=0) y1=y1+1;
        if(z==0) y2=y2-1;
        if(a==0){
            if(d2<29)y2=y2-1;
        }

        for(j=y1; j<=y2; j++)
        {
            if(j%4==0&&j%100!=0||j%400==0) c++;
        }
        printf("Case %d: %d\n",i,c);
    }
    return 0;
}
