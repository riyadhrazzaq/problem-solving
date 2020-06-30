#include<stdio.h>
int main()
{
    int a1,a2,a3,b1,b2,b3,t,i,year;
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%d/%d/%d",&a1,&a2,&a3);
        scanf("%d/%d/%d",&b1,&b2,&b3);
        year=a3-b3;
        if(a2<b2) year=year-1;
        else if(a2==b2){
            if(a1<b1) year=year-1;
        }

        if(year<0) printf("Case #%d: Invalid birth date\n",i);
        else if(year==0) printf("Case #%d: 0\n",i);
        else if(year>=1&&year<=130) printf("Case #%d: %d\n",i,year);
        else if(year>130) printf("Case #%d: Check birth date\n",i);
    }
    return 0;
}
