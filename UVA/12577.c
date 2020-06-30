#include<stdio.h>
#include<string.h>
int main()
{
    char a[1000];
    while(1)
    {
        int l,c=0,i;
        gets(a);
        l=strlen(a);
        for(i=0;i<l;i++)
        {
            if(a[i]>64&&a[i]<91||a[i]>96&&a[i]<123||a[i]=='-') c++;
            else if(a[i]==32) {
                printf("%d ",c);
                c=0;
            }
        }
        printf("\n");
    }
return 0;
}
