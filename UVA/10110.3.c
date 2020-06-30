#include<stdio.h>
int numofFactors(int n);
int main()

{
    int n,x,f,i;
    while(scanf("%d",&n)&&n!=0)
    {
       x=numofFactors(n);
       if(x%2==0) puts("no");
       else puts("yes");
    }
    return 0;
}

int numofFactors(int n)
{
    while(n!=1)
    {

    }


}
