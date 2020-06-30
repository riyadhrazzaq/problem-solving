#include<stdio.h>
#define n 10000000

int isPrime(int z);
int listofprime[100000];
int x=0;
int main()
{
    bool prime[n];
    int i,j;
    for(i=2; i<n; i++)
    {
        prime[i]=1;
    }
    prime[0]=0;
    prime[1]=0;
    for(i=2; i<n; i++)
    {
        if(prime[i]==1)
        {
            for(j=i*2; j<n; j+=i)
            {
                prime[j]=0;
            }
        }
    }

    for(i=0; i<n; i++)
    {
        if(prime[i]==1) listofprime[x++]=i;
    }


    int num,y,z;
    while(scanf("%d",&num)&&num!=0)
    {
        for(i=0; i<x; i++)
        {

            z=num-listofprime[i];
            y=isPrime(z);


            if(y==1) {printf("%d = %d + %d\n",num,listofprime[i],z); break;}
        }
    }
    return 0;
}
int isPrime(int z)
{
   int first, last, middle;

   first = 0;
   last = x - 1;
   middle = (first+last)/2;

   while (first <= last) {
      if (listofprime[middle] < z)
         first = middle + 1;
      else if (listofprime[middle] == z) {
         return 1;
         break;
      }
      else
         last = middle - 1;

      middle = (first + last)/2;
   }
   if (first > last) return 0;

}








