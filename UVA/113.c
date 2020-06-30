#include<stdio.h>
#include<math.h>
int main()
{
    int n,i=0;
    unsigned long long int p,k,sum;
    while(scanf("%d%lld",&n,&p)==2){

        while(sum!=p){
            sum=pow(++i,n);
        }
        printf("%d\n",i);
    }
    return 0;
}
