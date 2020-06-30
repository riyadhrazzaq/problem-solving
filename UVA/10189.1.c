#include<stdio.h>
#include<string.h>

int main()
{
    int m,n,i;
    while(scanf("%d%d",&m,&n)&&m!=0&n!=0)
    {
        char s[m][n];
        getchar();

        for(i=0;i<m;i++)
        {
            scanf("%s",s[i]);
            getchar();
        }
        puts(s[0]);

    }
}
