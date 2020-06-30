#include<stdio.h>
int main()
{
    char aa[100];
    int ts,t,len,ix,sum;
    scanf("%d",&ts);
getc(stdin);
    for(t=1;t<=ts;t++)
    {

        sum=0;
        gets(aa);
        len=strlen(aa);
        for(ix=0;ix<len;ix++)
        {
            if(aa[ix]=='a'||aa[ix]=='d'||aa[ix]=='g'||aa[ix]=='j'||aa[ix]=='m'||aa[ix]=='p'||aa[ix]=='t'||aa[ix]=='w'||aa[ix]==32) sum=sum+1;
            else if(aa[ix]=='b'||aa[ix]=='e'||aa[ix]=='h'||aa[ix]=='k'||aa[ix]=='n'||aa[ix]=='k'||aa[ix]=='n'||aa[ix]=='q'||aa[ix]=='u'||aa[ix]=='x') sum=sum+2;
            else if(aa[ix]=='c'||aa[ix]=='f'||aa[ix]=='i'||aa[ix]=='l'||aa[ix]=='o'||aa[ix]=='r'||aa[ix]=='v'||aa[ix]=='y') sum=sum+3;
            else if(aa[ix]=='s'||aa[ix]=='z') sum=sum+4;
        }
        printf("Case #%d: %d\n",t,sum);

    }
    return 0;
}
