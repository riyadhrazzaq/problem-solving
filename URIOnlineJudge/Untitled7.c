
#include <stdio.h>
int main()
{
    int n,i, fst=0,snd=1,nxt=0;
    scanf("%d", &n);
    for(i=1; i<n; i++)
    {
        if(i%2==1)
        {
            printf("%d ",nxt);
            nxt=fst+snd;
            fst=nxt;
        }
        else if(i==2)
            printf("%d ",nxt);
        else if(i%2==0)
        {
            printf("%d ",nxt);
            nxt=fst+snd;
            snd=nxt;
        }
    }
    printf("%d\n",nxt);
    return 0;
}
