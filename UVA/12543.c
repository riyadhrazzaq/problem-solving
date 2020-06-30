#include<stdio.h>
#include<string.h>
int main()
{
    int l,i,end,j;

    char a[10000],b[100];

    int max=0,x=0,c=0;

    gets(a);
    l=strlen(a);
    for(i=0; i<l; i++)
    {
        if(a[i]>64&&a[i]<91||a[i]>96&&a[i]<123||a[i]=='-') c++;
        else
        {
            if(c>max)
            {
                max=c;
                x=0;
                for(j=i-c; j<=i-1; j++)
                {
                    b[x++]=a[j];
                }

            }


            c=0;
        }
    }

    b[x]='\0';
    for(i=0; i<max; i++)
    {
        if(b[i]>64&&b[i]<91) b[i]=b[i]+32;
    }

    puts(b);
    printf("\n");



return 0;
}
