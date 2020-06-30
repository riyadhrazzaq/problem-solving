#include<stdio.h>
int main()
{
    int n,t,flag;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==0) break;
        else
        {

            flag=0;
            for(t=0; t<n; t++)
            {
                int a[n],i,x[n],j=0;

                scanf("%d",&a[t]);
                x[t]=a[t]-a[t-1];
                x[t]=abs(x[t]);

                if(x[t]>=n&&t>0)
                {
                    flag=1;
                }

                for(i=1; i<=t; i++)
                {
                    if(x[t]==x[i]&&t!=i)
                    {
                        flag=1;
                    }
                }
            }
        }



        if(flag==1) printf("Not jolly\n");
        else printf("Jolly\n");

    }
    return 0;
}
