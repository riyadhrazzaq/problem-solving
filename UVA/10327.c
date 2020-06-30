#include<stdio.h>
int main()
{
    int n,j,max,k,i,temp=1;
    while(scanf("%d",&n)!=EOF)
    {
        int a[n],c=0,x=-1;

        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(a[i]>a[j])
                {
                 c++;
                }
            }
        }
       printf("Minimum exchange operations : %d\n",c);
    }
    return 0;
}
