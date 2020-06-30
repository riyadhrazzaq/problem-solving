#include<stdio.h>
#include<vector>

int main()
{
    int t,i,j,a,b,r;
    scanf("%d",&t);
    while(t--)
    {
        int x;
        std::vector <int> n;
        while(scanf("%d",&x)!=-1)
        {
            n.push_back(x);
        }

        printf("%d",n.size());

        for(i=0; i<n.size(); i++)
        {
            for(j=i+1; j<n.size(); j++)
            {
                printf("i=%d,j= %d\n",i,j);
                int a=n[i], b=n[j], r;
                if(a==0&&b!=0) printf("\nmax GCD(%d,%d) is %d\n",n[i],n[j],b);
                else if(a!=0&&b==0) printf("\nmax GCD(%d,%d) is %d\n",n[i],n[j],a);
                else
                {
                    while(b!=0)
                    {

                        r=a%b;
                        a=b;
                        b=r;

                        if(b==0) break;
                    }
                    printf("\nmax GCD(%d,%d) is %d\n",n[i],n[j],a);

                }

            }
        }
    }
    return 0;
}
