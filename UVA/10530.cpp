#include<stdio.h>
#include<string.h>

int main()
{
    int n,up=11,lo=0;
    char st[10];
    while(scanf("%d",&n)&&n!=0)
    {
        getchar();
        gets(st);
        if(strcmp(st,"too high")==0)
        {
            if(n<up) up=n;
        }
        else if(strcmp(st,"too low")==0)
        {
            if(n>lo) lo=n;
        }
        else if(strcmp(st,"right on")==0)
        {
            if(n<up&&n>lo)
            {
                printf("Stan may be honest\n");
            }
            else printf("Stan is dishonest\n");
            lo=0;up=11;
        }

    }
    return 0;
}
