#include<stdio.h>
int main()
{
    int i,n,fst=0,snd=1,nxt;
    scanf("%d",&n);
    printf("%d",fst);
    for(i=1;i<n-1;i++){

        printf(" %d",nxt=fst+snd);
            snd=fst;
            fst=nxt;
            nxt=fst+snd;
    }
    printf(" %d\n",nxt);

    return 0;
}
