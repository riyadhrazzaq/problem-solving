#include<stdio.h>
int main()
{
    float x,avg,sum=0,c=0,i;
    for(i=1;;i++){ scanf("%f",&x);
        if (x<0||x>10){
            printf("nota invalida\n");
        }
        else if(x>=0||x<=10){
            c++; sum=sum+x;
        }
        if(c==2) {break;}


    }
     printf("media = %.2f\n",sum/c);
     return 0;
}
