#include<stdio.h>
int f91(int n)
{

        if(n>=101) {
      return n-10;
   }
   return f91(f91(n+11));
}

int main()
{
    int i;
    while(scanf("%lld",&i)&&i!=0){
            printf("f91(%d) = %d\n",i,f91(i));
    }

    return 0;
}
