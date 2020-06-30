#include<stdio.h>
#include<string.h>

int main()
{
    char s[1000],k[1000];
    while(gets(s)&&s!=0)
    {
        int i,l=strlen(s),hold=0,index=0,j;
        for(i=0;i<=l;i++)
        {
            if(s[i]==32||s[i]=='\0')
            {
                for(j=i-1;j>=hold;j--)
                {
                    k[index++]=s[j];
                }
                k[index++] =32;
                hold=i+1;
            }
        }
        k[index]='\0';
        l=strlen(k);
        for(i=0;i<l-1;i++)
        {
            printf("%c",k[i]);
        }

        printf("\n");
    }
    return 0;
}
