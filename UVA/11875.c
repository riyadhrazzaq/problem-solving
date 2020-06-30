#include<stdio.h>
int main()
{
    int ts,t;
    scanf("%d",&ts);
    for(t=1;t<=ts;t++)
    {
        int n,i;
        scanf("%d",&n);
        int team[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&team[i]);
        }
        printf("Case %d: %d\n",t,team[n/2]);
    }
}
