#include<stdio.h>
int main()
{
    long long int n;
    int sum=10, mod;
    while(scanf("%d",&n)!=0){
            sum=0;
        while(sum>9){

            while(n!=0){
                mod=n%10;
                sum=sum+mod;
                n=n/10;
            }

        }
            printf("%d\n",sum);

    }
return 0;
}
