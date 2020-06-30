#include<stdio.h>
#include<string.h>

bool mark[1100];
int prime[1000],x;
int main()
{
    char a[21];
    int l,i;
    mark[0]=1;
    for(i=4;i<=1100;i++)
    {
        mark[i]=1;
    }
    for(i=3;i<=sqrt(1100);i+=2)
    {
        if(mark[i]==0)
        {
            for(j=i+i;j<1100;j+=2)
            {
                mark[i]=1;
            }
        }
    }

    for(i=1;i<1100;i++)
    {
        if(mark[i]==0) prime[x++]=i;
    }
    for(i=0;i<x;i++)
    {
        printf("%d",prime[i]);
    }


    while(gets(a)!=EOF)
    {
        l=strlen(a);
        int sum=0,f=0;
        for(i=0;i<l;i++)
        {
            if(a[i]=='a') sum=sum+1;

            else if(a[i]=='b') sum=sum+2;
            else if(a[i]=='c') sum=sum+3;
            else if(a[i]=='d') sum=sum+4;
            else if(a[i]=='e') sum=sum+5;
            else if(a[i]=='f') sum=sum+6;
            else if(a[i]=='g') sum=sum+7;
            else if(a[i]=='h') sum=sum+8;
            else if(a[i]=='i') sum=sum+9;
            else if(a[i]=='j') sum=sum+10;
            else if(a[i]=='k') sum=sum+11;
            else if(a[i]=='l') sum=sum+12;
            else if(a[i]=='m') sum=sum+13;
            else if(a[i]=='n') sum=sum+14;
            else if(a[i]=='o') sum=sum+15;
            else if(a[i]=='p') sum=sum+16;
            else if(a[i]=='q') sum=sum+17;
            else if(a[i]=='r') sum=sum+18;
            else if(a[i]=='s') sum=sum+19;
            else if(a[i]=='t') sum=sum+20;
            else if(a[i]=='u') sum=sum+21;
            else if(a[i]=='v') sum=sum+22;
            else if(a[i]=='w') sum=sum+23;
            else if(a[i]=='x') sum=sum+24;
            else if(a[i]=='y') sum=sum+25;
            else if(a[i]=='z') sum=sum+26;
            else if(a[i]=='A') sum=sum+27;
            else if(a[i]=='B') sum=sum+28;
            else if(a[i]=='C') sum=sum+29;
            else if(a[i]=='D') sum=sum+30;
            else if(a[i]=='E') sum=sum+31;
            else if(a[i]=='F') sum=sum+32;
            else if(a[i]=='G') sum=sum+33;
            else if(a[i]=='H') sum=sum+34;
            else if(a[i]=='I') sum=sum+35;
            else if(a[i]=='J') sum=sum+36;
            else if(a[i]=='K') sum=sum+37;
            else if(a[i]=='L') sum=sum+38;
            else if(a[i]=='M') sum=sum+39;
            else if(a[i]=='N') sum=sum+40;
            else if(a[i]=='O') sum=sum+41;
            else if(a[i]=='P') sum=sum+42;
            else if(a[i]=='Q') sum=sum+43;
            else if(a[i]=='R') sum=sum+44;
            else if(a[i]=='S') sum=sum+45;
            else if(a[i]=='T') sum=sum+46;
            else if(a[i]=='U') sum=sum+47;
            else if(a[i]=='V') sum=sum+48;
            else if(a[i]=='W') sum=sum+49;
            else if(a[i]=='X') sum=sum+50;
            else if(a[i]=='Y') sum=sum+51;
            else if(a[i]=='Z') sum=sum+52;
        }

        if(f!=2) printf("It is not a prime word.\n");
        else printf("It is a prime word.\n");

    }
}

