#include<stdio.h>
int main()
{
    int i,x=-1,y=-2;
    while(scanf("%d %d",&x,&y)!=0){

        if(x>y) { printf("Decrescente\n"); }
        else if(x<y) { printf("Crescente\n"); }
        else {break;}
    }
    return 0;
}
