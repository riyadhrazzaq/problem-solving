#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,c,w;
    char a[1000];
    while(gets(a)>0) //breaks for null input
    {
        c=0,w=0;
        l=strlen(a);
        for(i=0;i<l;i++)
        {
            if(isalpha(a[i])) c++;
            else {
                if(c>0) w++;
                c=0;
            }
        }
        if(isalpha(a[l-1])) w++;
        printf("%d\n",w);
    }
    return 0;
}
