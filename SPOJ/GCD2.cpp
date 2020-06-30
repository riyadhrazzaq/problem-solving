#include<bits/stdc++.h>
using namespace std;
int reduceMod(char b[], int a)
{
    int i,mod=0;
    for(i=0; i<strlen(b); i++)
    {
        mod= (mod*10 + b[i]-'0') % a;
    }
    return mod;
}
int makeGCD(int a,int b)
{
    if(b==0) return a;
    else
    {
        return makeGCD(b,a%b);
    }
}

int main()
{
    int t=6;
     scanf("%d",&t);
    while(t--)
    {
        int a;
        char b[255];
        scanf("%d",&a);
        getchar();
        scanf("%s",&b);
        if(a==0)
        {
            printf("%s\n",b);
        }
        else if(!strcmp(b,"0"))
        {
            printf("%d\n",a);
        }
        else
        {
            int temp = reduceMod(b,a); // b%a
            printf("%d\n",makeGCD(a,temp));

        }

    }
}
