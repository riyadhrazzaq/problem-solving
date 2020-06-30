#include<stdio.h>
#include<math.h>

#define n 20000000

bool status[n];

int main()
{
    int i,j,x;
    long long int twin[100002],y=0;
    status[0]=1;
    status[1]=1;
    for(i=4;i<n;i+=2)
    {
        status[i]=1;
    }
    for(i=3;i<sqrt(n);i+=2)
    {
        if(status[i]==0)
        for(j=i+i;j<n;j+=i)
        {
            status[j]=1;
        }
    }
    unsigned int z;
    for(z=3;z<n;z+=2)
    {
        if(status[z]==0&&status[z+2]==0) twin[y++]=z;
    }


    for(i=1;i<=100000;i++)
    {
        scanf("%d",&x);
        printf("(%lld, %lld)\n",twin[x-1],twin[x-1]+2);
    }

    return 0;
}
