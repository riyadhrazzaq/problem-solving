#include<stdio.h>
#include<algorithm>
int main()
{
    int t,n,m,d,h,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d%d",&n,&m,&d);
        int a[n],tower=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
            if(a[i]-d >0)
            {
                int tmp = a[i];
                while(tmp-d > 0 )
                {
                    tower++;
                    tmp-=d;
                }
            }
        }
        if(tower>=m) printf("YES\n");
        else printf("NO\n");
    }

}
