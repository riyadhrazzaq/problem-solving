#include<stdio.h>
int main()
{
    int t,x,y;
    scanf("%d",&t);
    while(t--&&t>=0)
    {
        scanf("%d%d",&x,&y);
        if(y==x||y==x-2)
        {
            if(x%2==0) printf("%d\n",x+y);
            else printf("%d\n",x+y-1);
        }
        else
        {
            printf("No Number\n");
        }
    }

}
