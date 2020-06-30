#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int idx=1, c, pro,n,i,k;
        char res[200];
        scanf("%d",&n);
        res[0]=1;

        for(i=2; i<=n; i++)
        {
            c=0;
            for(k=0; k<idx; k++)
            {
                pro= ( res[k] * i )+ c;
                res[k] = pro%10;
                c=pro/10;
            }

            while(c/10>0)
            {
                res[idx++]=c%10;
                c/=10;
            }
            if(c%10!=0) res[idx++] = c%10;


        }

        for(i=idx-1; i>=0; i--)
        {
            printf("%d",res[i]);
        }
        printf("\n");
    }
}
