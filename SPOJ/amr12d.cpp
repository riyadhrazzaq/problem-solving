#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,l;
    char str[11];
    scanf("%d",&t);
    while(t--)
    {
        int f=0;
        scanf("%s",&str);
        l=strlen(str)/2;
        int k=strlen(str);
        for(i=0;i<=l;i++)
        {
            if(str[i]!=str[k -i-1]) {f=1; break;}
        }
        (f==1)?printf("NO\n"):printf("YES\n");
    }
}
