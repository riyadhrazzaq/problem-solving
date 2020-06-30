#include<stdio.h>
int main()
{
    float n,sum;
    while(scanf("%f",&n)&&n!=0.00)
    {
        sum=0.0;
        int i=2;
        while(sum<=n)
        {
            sum+= ((1.0)/i);
            i++;
        }
        printf("%d card(s)\n",i-2);

    }
}
