#include<stdio.h>
#include<algorithm>

using namespace std;
int main()
{
    int t,m,ts;
    unsigned long long x,inc,exl,temp;
    scanf("%d",&t);
    for(ts=1; ts<=t; ts++)
    {
        scanf("%d",&m);
        if(m!=0)
        {
            for(int i=0; i<m; i++)
            {
                scanf("%llu",&x);
                if(i==0)
                {
                    inc= x;
                    exl= 0;
                }
                else
                {
                    temp=exl;
                    exl = max(inc,exl);
                    inc = temp + x;
                }
            }
            printf("Case %d: %llu\n",ts,max(inc,exl));
        }
        else {
            getchar();
            printf("Case %d: 0\n");
        }

    }

}
