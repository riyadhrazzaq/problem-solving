#include<stdio.h>
#include<string.h>
#include<vector>
int main()
{
    int t;
    scanf("%d",&t);
    getchar();

    while(t--)
    {
        char a[100],x[100],y[100],z[100];
        std::vector<int > v;
getchar();
        scanf("%[^\n]%*c",a);

        int l=strlen(a);
        int sum=0,res,m=-1,i;
        for(i=0; i<l; i++)
        {
            if(a[i]=='m') m=i;
            if(a[i]==32)
            {
                v.push_back(sum);
                sum=0;
                v.push_back(i+1);
                i+=2;
            }
            else sum=(sum*10)+ (a[i]-48);
        }
        v.push_back(sum);

        if(m>=0&&m<v[1])
        {
            res= v[4]-v[2];
            printf("%d + %d = %d\n",res,v[2],v[4]);
        }
        else if(m>v[1]&&m<v[3])
        {
            res=v[4]-v[0];
            printf("%d + %d = %d\n",v[0],res,v[4]);
        }
        else
        {
            res=v[0]+v[2];
            printf("%d + %d = %d\n",v[0],v[2],res);
        }

        v.clear();
    }
}
