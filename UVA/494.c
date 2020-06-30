#include<stdio.h>
#include<string.h>
int main()
{
    int l,i,c;
    char a[1000];
    while(gets(a)!=EOF)
    {
        c=0;
        l=strlen(a);

        for(i=0;i<l;i++)
        {

            if(a[i]==32||a[i]==44&&isalpha(a[i+1])) c++;
        }
        c++;
        printf("%d\n",c);

    }
return 0;
}
