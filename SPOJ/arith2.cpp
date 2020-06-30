#include<stdio.h>
int main()
{
    int t,op;
    long long ans=0,n;
    char tmp,c[100];
    scanf("%d",&t);
    getchar();
    while(t--)
    {
        getchar();
        op=1;
        ans = 0;
        while(scanf("%s",c))
        {
            if(c[0]=='=') break;

            if(c[0]=='+')
            {
                op=1;

            }
            else if(c[0]=='-')
            {
                op=2;

            }
            else if(c[0]=='*')
            {
                op=3;

            }
            else if(c[0]=='/')
            {
                op=4;

            }
            else if(c[0]>47&&c[0]<58)
            {
                sscanf(c,"%lld",&n);
                if(op==1) ans+=n;
                else if(op==2) ans-=n;
                else if(op==3) ans*=n;
                else if(op==4)
                {
                    float temp= (float)ans/ (float) n;
                    ans= (int) temp;
                }

            }
            getchar();
        }
        printf("%lld\n",ans);
    }
}
