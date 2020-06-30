#include<stdio.h>
int main()
{
    int l,i;
    char a[1000];
    while (gets(a)!= '\0')
    {
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        printf("%c",a[i]-7);
    }
    printf("\n");
    }
    return 0;
}
