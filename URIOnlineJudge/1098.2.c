#include<stdio.h>
int main()
{
    float i,j,a=0,b=1,c=1;
    for(i=1;i<=11;i++){
        for(j=1;j<=3;j++){
            if(a-(int)a==0){printf("I=%d J= \n",a,b);}
            else {printf("I=%.1f J=%.1f\n",a,b);}
            b++;
        }
        a=a+.2;
        b=a+c;
    }
    return 0;
}
