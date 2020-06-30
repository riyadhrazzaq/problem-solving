#include<bits/stdc++.h>
int t,n,i,j,k;
long long int c;

void run(int a[],int p,int q,int r)
{
    int n1,n2;
    n1= q-p+1;
    n2=r-q;
    int L[n1],R[n2];
    for(i=0; i<n1; i++)
        L[i]=a[p+i];
    for(j=0; j<n2; j++)
        R[j]=a[q+j+1];
    i=0;j=0;k=p;
    while(i<n1&&j<n2)
    {
        if(L[i]<=R[j]) {
            a[k++]=L[i++];
        }
        else{
            a[k++]=R[j++];
            c+= (n1-i) ;

        }
    }
    while(i<n1)
    {
        a[k++]=L[i++];
    }
    while(j<n2)
    {
        a[k++]=R[j++];
    }

}
void fuck(int a[],int p,int r)
{
    if(p<r)
    {
        int q=(p+r)/2;
        fuck(a,p,q);
        fuck(a,q+1,r);

        run(a,p,q,r);
    }

}

int main()
{
  scanf("%d",&t);
    while(t--)
    {
        getchar();
        scanf("%d",&n);
        int a[n+1];
        for(i=0;i<n;i++) scanf("%d",&a[i]);
        c=0;
        fuck(a,0,n-1);
        printf("%lld\n",c);
    }
    return 0;
}
