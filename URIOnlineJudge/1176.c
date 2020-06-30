#include<stdio.h>
int main()
{
    int i,n,fst=0,snd=1,nxt;
    scanf("%d",&n);
    for(i=0;i<n-1;i++){
    if(n<=1) nxt=0;
    else{
        nxt=fst+snd;
        fst=snd;
        snd=nxt;
        }
    }
    printf("%d",nxt);


    return 0;
}
