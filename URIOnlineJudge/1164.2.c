#include<stdio.h>
int main()
{
    int i,n,a,j,c;
    scanf("%d",&a);
    for(i=1; i<=a; i++)
    {
        scanf("%d",&n);
        c=0;
        for(j=1; j<n; j++)
        {
            if(n%j==0) c=c+j;
        }
        if(c==n) printf("%d eh perfeito\n",n);
        else {printf("%d nao eh perfeito\n",n); }
    }
    return 0;
}
