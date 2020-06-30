#include<stdio.h>
int main ()
{
    int n,n100,n50,n20,n10,n5,n2,n1;
    scanf("%d",&n);
    n100=n/100;
    n50=n%100/50;
    n20=n50/20;
    n10=n20/10;
    n5=n10/5;
    n2=n5/2;
    n1=n2/1;

    printf("%d nota(s) de U$ 100,00\n",n100);
    printf("%d nota(s) de U$ 50,00\n",n50);
    printf("%d nota(s) de U$ 20,00\n",n20);
    printf("%d nota(s) de U$ 10,00\n",n10);
    printf("%d nota(s) de U$ 5,00\n",n5);
    printf("%d nota(s) de U$ 2,00\n",n2);
    printf("%d nota(s) de U$ 1,00\n",n1);

    return 0;
}
