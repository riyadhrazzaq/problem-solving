#include<stdio.h>
int main ()
{
    int h1,m1,h2,m2,hb,m,ml,hlow,mlow;
    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
    hb=(24-h1)+h2;
    m=m1-m2;
    ml=(60-m1)+m2;
    hlow=h2-h1;
    mlow=m2-m1;
    if(h1>h2){
        if(m1>m2){printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hb,m);}
        else if (m1<m2){printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hb,ml);}
        else if (m1==m2){printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n",hb);}
    }
    else if (h1<h2){
            if (m1>m2){
                    if (hlow==1){printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hlow,mlow); }
                    }
            }

    else{printf("x");}

    return 0;
}
