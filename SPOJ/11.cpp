#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,z=20;
        scanf("%d",&n);
        while(n>=1)
        {
            z+= (int)(n/5);
            n/=5;
        }
        printf("%d\n",z);
    }
}
