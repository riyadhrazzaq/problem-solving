#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,drtn;
    scanf("%d %d",&a,&b);
    if (a>b){
        drtn=(24-a)+b;
        printf("O JOGO DUROU %d HORA(S)\n",drtn);
    }
    else if (a<b){
        drtn=abs(a-b);
        printf("O JOGO DUROU %d HORA(S)\n",drtn);
    }
    else { printf("O JOGO DUROU 24 HORA(S)\n");}
    return 0;
}

