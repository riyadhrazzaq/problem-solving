#include<stdio.h>
int main()
{
    int n,i,j;
    float a[12][12],s=0;
    char t;
    scanf("%d",&n);
    scanf("%s",&t);
    for(i=0; i<12; i++)
    {
        for(j=0; j<12; j++)
        {
            scanf("%f",&a[i][j]);
            if(i==n)s=s+a[i][j];
        }
    }
    if(t=='S') printf("%.1f\n",s);
    if(t=='M') printf("%.1f\n",s/12);
    return 0;
}
