#include<stdio.h>
#define n 31630

int main()
{
    int i,j,number[4000];

    long long int prime[n];

    for(i=0; i<=n; i++)
    {
        prime[i]=1;
    }
    for(i=2; i<n; i++)
    {
        if(prime[i]==1)
        {
            for(j=i*2; j<=n; j=j+i)
            {
                prime[j]=0;
            }
        }

    }
    int x=0;
    for(i=2; i<=n; i++)
    {
        if(prime[i]==1)
        {
            number[x++]=i;
            printf("%d ",number[x-1]);
        }
    }

    //
    int n,factor[1000],x=0,i,ts,t,L,H,j;
    scanf("%d",&ts);
    for(t=1; t<=ts; t++)
    {
        scanf("%d%d",&L,&H);
        int list[H-L+1];
        for(j=L; j<=H; j++)
        {
            x=0;
            n=j;
            factor[0]=0;
            for(i=2; i<=n/2; i++)
            {
                while(n%i==0)
                {
                    n=n/i;
                    factor[x++]=i;
                }
            }
            if(j!=1&&factor[0]==0) list[j-L]=2;
            else if(j==1&&factor[0]==0) list[j-L]=1;
            else
            {
                int temp[x];
                int y=0,c=0;
                if(n!=1) factor[x++]=n;
                for(i=0; i<x; i++)
                {
                    if(factor[i+1]==factor[i]) c++;
                    else
                    {
                        temp[y++]=c+1;
                        c=0;
                    }
                }
                int div=1;
                for(i=0; i<y; i++)
                {
                    div=div*(temp[i]+1);
                }
                list[j-L]=div;
            }
        }
        int max=list[0],hi=L;
        for(i = 0 ; i<j-L; i++)
        {
            if(list[i]>max)
            {
                max=list[i];
                hi=i+L;
            }
        }
        printf("Between %d and %d, %d has a maximum of %d divisors.\n",L,H,hi,max);

    }



    return 0;
}
