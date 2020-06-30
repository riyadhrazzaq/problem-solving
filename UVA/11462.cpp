#include<stdio.h>
int i,j,k;

void mrg(int a[],int p,int q,int r)
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
        if(L[i]<=R[j]) a[k++]=L[i++];
        else a[k++]=R[j++];
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

void divide(int a[],int p,int r)
{
    if(p<r)
    {
        int q=(p+r)/2;
        divide(a,p,q);
        divide(a,q+1,r);

        mrg(a,p,q,r);
    }

}

int main()
{
    int n;
    while(scanf("%d",&n)&&n!=0)
    {
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        divide(a,0,n-1);
        for(i=0;i<n-1;i++)
        {
            printf("%d ",a[i]);
        }
        printf("%d\n",a[n-1]);

    }

}
