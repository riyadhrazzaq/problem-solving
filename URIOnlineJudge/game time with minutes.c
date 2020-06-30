#include<stdio.h>
#include<math.h>
int main()
{
    int h1,m1,h2,m2,h,m;
    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);

    if (h1>h2){
        if (m1>m2){ printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(24-h1)+h2,(60-m1)+m2);}
        else if(m1<m2){ printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(24-h1)+h2,abs(m1-m2));}
        else {printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n",(24-h1)+h2);}
    }
    else if (h1<h2){
        if (m1>m2){
                h=abs(h1-h2);
                m=(60-m1)+m2;
                if(h<1&&m<60){ printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n",m);}
                else {printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",abs(h1-h2),(60-m1)+m2);
        }
        }
        else if(m1<m2){ printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",abs(h1-h2),abs(m1-m2));}
        else {printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n",abs(h1-h2));}
    }
    else if (h1==h2){
         if (m1>m2) {printf("O JOGO DUROU 24 HORA(S) E %d MINUTO(S)\n",(60-m1)+m2);}
         else if(m1<m2) {printf("O JOGO DUROU 24 HORA(S) E %d MINUTO(S)\n",abs(m1-m2));}
          else {printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");}
    }
    return 0;
}
