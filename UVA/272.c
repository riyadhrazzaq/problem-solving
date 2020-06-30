#include<stdio.h>
#include<string.h>
int main()
{
    char a[100001];
    int d=0,l,i;
    while(gets(a)){
    l=strlen(a);


    for(i=0; i<l; i++)
    {

        if(a[i]=='"')
        {
            d++;
            {
                if(d%2!=0)
                {

                    printf("``");
                }
                else
                {
                    printf("''");
                }
            }
        }
        if(a[i]!=34) printf("%c", a[i]);

    }
    printf("\n");
    }
    return 0;
}
