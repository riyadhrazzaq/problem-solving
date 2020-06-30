#include<stdio.h>
#include<math.h>

int main()
{
   // Multiply n by 567, then divide the result by 9, then add 7492, then multiply by 235, then divide
   // by 47, then subtract 498. What is the digit in the tens column?

    int ts,i,n;
    scanf("%d",&ts);
    for(i=1;i<=ts;i++)
    {
        scanf("%d",&n);
        printf("%d\n",abs((((((((n*567)/9)+7492)*235)/47)-498))/10%10));

    }
    return 0;
}
