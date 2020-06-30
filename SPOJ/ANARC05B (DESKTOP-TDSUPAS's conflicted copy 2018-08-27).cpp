#include<bits/stdc++.h>
using namespace std;

int i,j;
void anarc(int a[],int n,int b[],int m)
{
    long long x[n+5],y[m+5],alt[m+2],fuk;
    int idx;
    alt[0]=-1;
    x[0]=0;
    y[0]=0;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            if(a[i-1]!=b[j-1])  //2,2
            {
                x[i]=x[i-1]+a[i-1];
                if(i==idx) x[i]=fuk;
                y[j]=y[j-1]+b[j-1];
                if(j==idx) y[j]=fuk;
                cout<<(j==idx);
                printf(" x[%d] %lld y[%d] %lld\n",i,x[i],j,y[j]);
            }
            else
            {
                x[i]=max(x[i],y[j]);
                y[j]=x[i];
                idx=(x[i]>=y[j])?i:j;
                fuk=(x[i]>=y[j])?x[i]:y[j];
                printf("x=%lld,y=%lld\n",x[i],y[j]);
            }
        }
        printf("\n");
    }
    printf("x=%lld,y=%lld\n",x[n+1],y[m+1]);
    printf("%lld\n",max(x[n],y[m]));
}
int main()
{
    int n,m;
    while(scanf("%d",&n)&&n!=0)
    {
        int a[n+2];
        for(i=0; i<n; i++) scanf("%d",&a[i]);
        scanf("%d",&m);
        int b[m+2];
        for(i=0; i<m; i++) scanf("%d",&b[i]);
        anarc(a,n,b,m);
    }
    return 0;
}
