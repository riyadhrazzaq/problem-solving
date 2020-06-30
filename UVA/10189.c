#include<stdio.h>
int main()
{
    int c,s,a,b,i,j;

    while(scanf("%d%d",&a,&b)&&a!=0&&b!=0)
    {
        char x[a][b];
        s=0,c=0;

        for (i=0; i<a; i++)
        {
            scanf ("%s", x[i]);
        }


        printf ("%s", x[0]);printf("\n");
        printf ("%s", x[1]);printf("\n");
        printf ("%s", x[2]);printf("\n");
        printf ("%s", x[3]);printf("\n");


    }
    return 0;
}
