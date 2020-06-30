#include<stdio.h>

int main()
{
    int m,n,i,j;
    while(scanf("%d%d",&m,&n)&&m!=0)
    {
        char *a[m][n];
        for(i=0; i<=m; i++)
        {
            for(j=0; j<n; j++)
            {
                scanf("%c",&a[i][j]);
            }

        }

        for(i=0;i<=m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(a[i][j]==42) {
                    a[i][j+1]=
                }
            }
        }




    }

    return 0;

}
