#include<stdio.h>
int main()
{
    int i,n,amount,total=0,coelhos=0,rat=0,sapos=0;
    char anml;
    double pc,pr,ps;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d %c",&amount,&anml);
        total=amount+total;
        if(anml=='C'){coelhos=amount+coelhos; }
        else if(anml=='R') {rat=amount+rat;}
        else if(anml=='S') {sapos=amount+sapos;}


    }
    pc=((double)coelhos/total)*100;
    pr=((double)rat/total)*100;
    ps=((double)sapos/total)*100;
    printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n",total,coelhos,rat,sapos,pc,pr,ps);

    return 0;
}
