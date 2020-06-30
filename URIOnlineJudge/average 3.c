#include<stdio.h>
int main ()
{
    float a,b,c,d,avg1,e,avg2;
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    avg1=(a*2+b*3+c*4+d*1)/10;
    printf("Media: %.1f\n",avg1);
    if (avg1>=7){printf("Aluno aprovado.\n");}
    else if (avg1<5){printf("Aluno reprovado.\n");}
    else if(avg1>=5&&avg1<=6.9){printf("Aluno em exame.\nNota do exame: %.1f",e);

    avg2=(avg1+e)/2;
    if(avg2>=5){printf("Aluno aprovado.\n");}
    else if(avg2<=4.9){printf("Aluno reprovado.\n");}
    printf("Media final: %.1f\n",avg2);
    }
    return 0;
}
