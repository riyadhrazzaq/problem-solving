#include<stdio.h>
#include<string.h>

int main()
{
    char str[10];
    gets(str);
    int l=strlen(str);
    str[l-1]+2;
    puts(str[l-1]);

}
