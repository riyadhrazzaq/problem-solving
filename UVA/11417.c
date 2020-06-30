#include<stdio.h>
int gcd(int i,int j);
int main()
{
    int n,i,j;
    while(scanf("%d",&n)&&n!=0){
         int g=0,x=-1;
        for(i=1;i<n;i++){
            for(j=i+1;j<=n;j++){
                g=g+gcd(i,j);
            }
        }
        printf("%d\n",g);
    }
    return 0;
}
int gcd(int i,int j){
int x=-1;
while(x!=0)
                {
                    x=j%i;
                    j=i;
                    i=x;
                }
return j;
}
