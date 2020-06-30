#include<stdio.h>
int main()
{
    int i,l,c;
    char a[1000];
    while(gets(a)!=EOF)
    {
        c=0;
        l=strlen(a);
        for(i=0;i<l;i++)
        {
            if(a[i]==32||a[i]==46)
            {
                if(a[i+1]>32&&a[i+1]<127)
                {
                    if(isalpha(a[i+1]))
                }
            }
        }
        printf("%d\n",++c);
    }

    return 0;
}
