#include<stdio.h>
int main()
{
    int i,a=0,b=1,c=1,f=1,g=2,l=2,m=3;
    float j,d=.2,e=1.2,h=1.2,k=2.2;
    for(i=1;i<4;i++){printf("I=%d J=%d\n",a,b); b++; }

    for(i=1;i<5;i++){
        for(j=1;j<4;j++){
            printf("I=%.1f J=%.1f\n",d,e); e++;
        }
        d+=.2;
        e=d+c;
    }

    for(i=1;i<4;i++){
      printf("I=%d J=%d\n",f,g); g++;
    }


    for(i=1;i<5;i++){
        for(j=1;j<4;j++){
            printf("I=%.1f J=%.1f\n",h,k); k++;
        }
        h+=.2;
        k=h+c;
    }

    for(i=1;i<4;i++){
      printf("I=%d J=%d\n",l,m); m++;
    }



    return 0;
}
