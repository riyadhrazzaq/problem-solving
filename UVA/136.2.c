#include<stdio.h>
int nthuglynum(int n);
int isUgly(int n);
int maximumDivide(int n,int i);
int main()

{
    unsigned int x;
    x=nthuglynum(1500);
    printf("1500th ugly no. is %d \n",x);
    return 0;
}

int nthuglynum(int n)
{
    int i=0,c=0;
    while(c!=n)
    {
        i++;
        if(isUgly(i)==1) {c++; }
    }
    return i;

}
int isUgly(int n)
{
    n=maximumDivide(n,2);
    n=maximumDivide(n,3);
    n=maximumDivide(n,5);
    if(n==1) return 1;
    else return 0;

}
int maximumDivide(int n,int i)
{
    while(n%i==0)
    {
        n=n/i;
    }
    return n;
}
