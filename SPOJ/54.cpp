#include<bits/stdc++.h>
using namespace std;

char n[110],x[110];
char res[110],idx,ren[110];

void division(char *d)
{
    int l= strlen(d), c=0,temp=0,i=-1,n=2;
    idx=0;
    while(temp<n)
    {
        temp= temp*10 + (d[++i]-48);
    }
    temp=temp/10;
    for(; i<l; i++)
    {
        temp =(temp*10)+ (d[i]-48);
        if(temp<n)
        {
            res[idx++] = 0;
            temp =(temp*10)+(d[++i]-48);
            if(temp<0) break;
        }

        res[idx++] = temp/n;
        temp=temp%n;
    }
    if(idx==0) res[idx++]=0;

}

int main()
{
    int t=10,k;
    char kld[110],nat[110];
    while(t--)
    {
        scanf("%s",&n);
        scanf("%s",&x);
        division(n);
        strcpy(ren,res);
        division(x);
        int ln= strlen(n),lx= strlen(x);  // res = x, ren= n
        if(n[ln-1]%2==0)
        {
            strcpy(kld,ren);
            strcpy(nat,ren);



        }
    }
}
