#include <stdio.h>
int main()
{
    int a,b,c,MaiorABC;
    scanf("%d %d %d",&a,&b,&c);
    MaiorABC=(a+b+c+abs(a-b-c))/2;
    printf("%d eh o maior\n",MaiorABC) ;
    return 0;
}
