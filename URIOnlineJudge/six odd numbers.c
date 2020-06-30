#include<stdio.h>
int main()
{
    int i,n,m;
    scanf("%d",&n);
    if (n%2==0){m=n+1;
    for(i=m;i<(m+12);i+=2){
        printf("%d\n",i);
    }
}
    else {for(i=n;i<n+12;i+=2){
        printf("%d\n",i);
    }
    }
    return 0;

}
