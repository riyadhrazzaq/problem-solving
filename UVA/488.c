#include<stdio.h>
int main()
{
    int a,f,i,j,ts=2,t;
    scanf("%d",&ts);
    for(t=1; t<=ts; t++)
    {
        scanf("%d%d",&a,&f);
        while(f--)
        {
            for(i=1; i<=a; i++)
            {
                for(j=1; j<=i; j++)
                {
                    printf("%d",i);
                }
                printf("\n");
            }
            for(i=a-1; i>=1; i--)
            {
                for(j=i; j>=1; j--)
                {
                    printf("%d",i);
                }

                printf("\n");
            }
            /* end of one separate wave form */
            if(f!=0||t!=ts) printf("\n");
        }

    }

    return 0;
}
