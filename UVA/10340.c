#include<stdio.h>
#include<string.h>
int compare(char *s1, char *s2,int index);

int main()
{
    char s1[100000],s2[100000];

    while(scanf("%s %s",s1,s2)==2)
    {
        int x,l1=strlen(s1),i,hold=0,l2=strlen(s2),flag;

        for(i=0; i<l1; i++)
        {
            int j,f=0;
            for(j=hold; j<l2; j++)
            {
                if(s1[i]==s2[j])
                {
                    f=1;
                    hold=j+1;
                    break;
                }
            }
            if(f==0)
            {
                flag=0;
                break;
            }
            else flag=1;

        }


        if(flag==1) puts("Yes");
        else puts("No");
    }

}
