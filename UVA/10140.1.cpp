#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
using namespace std;

const int M = 100001;

bool status[M];
int P[M], Psz;
long long int fprime[M];
bool _final[M];

int main()
{
    status[0]=1;
    status[1]=1;
    int i,j;
    for( i = 4 ; i < M; i += 2 )
    {
        status[i]=1;
    }
    for(i=3; i<=sqrt(M); i+=2)
    {
        if(status[i]==0)
            for(j=i+i; j<M; j+=i)
            {
                status[j]=1;
            }
    }
    for( int i = 2 ; i < M ; i ++ )
    {
        if( status[i]== 0 )
        {
            P[Psz++] = i;
        }
    }


    int a,b;
    while(scanf("%d%d",&a,&b)==2)
    {
        memset( _final, 0, sizeof( _final) );
        for( int i = 0 ; i < Psz ; i ++ )
        {
            long long int x = (a/P[i]) + ( (a%P[i])!=0 );
            x *= P[i];
            if( x == P[i] ) x = x+x;
            for( long long int j = x ; j <= b ; j += P[i] )
                _final[j-a] = 1;
        }
        int y=0;
        for(i=0; i<b-a+1; i++)
        {
            if( _final[i]==0 ) {fprime[y++]=i+a;  }
        }
        int maxx,mi,c1,c2,d1,d2;

        printf("y= %d\n",y);

        if(y==2) printf("There are no adjacent primes.\n");
        else
        {
            maxx=fprime[1]-fprime[0];
            d1=fprime[0];
            d2=fprime[1];
            c1=fprime[0];
            c2=fprime[1];

            mi=fprime[1]-fprime[0];

            for(i=0; i<y-1; i++)
            {
                if(fprime[i+1]-fprime[i]>maxx)
                {
                    maxx=fprime[i+1]-fprime[i];
                    d1=fprime[i];
                    d2=fprime[i+1];
                }
                if(fprime[i+1]-fprime[i]<mi)
                {
                    mi=fprime[i+1]-fprime[i];
                    c1=fprime[i];
                    c2=fprime[i+1];
                }
            }
            printf("%d,%d are closest, %d,%d are most distant.\n",c1,c2,d1,d2);
        }



    }
    return 0;
}

