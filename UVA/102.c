#include<stdio.h>
int main()
{
    int a0,a1,a2,a3,a4,a5,a6,a7,a8,sum,min,x,i;
    while(scanf("%d%d%d%d%d%d%d%d%d",&a0,&a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8)==9)
    {
        sum=a0+a1+a2+a3+a4+a5+a6+a7+a8;

        int b[6]={ sum-a0-a5-a7, sum-a0-a4-a8, sum-a2-a3-a7, sum-a2-a4-a6, sum-a1-a3-a8, sum-a1-a5-a6 };

        min=b[0],x=0;
        for(i=0;i<=5;i++)
        {

            if(b[i]<min) { min=b[i]; x=i; }
        }

             if(x==0) printf("BCG %d\n",b[x]);
        else if(x==1) printf("BGC %d\n",b[x]);
        else if(x==2) printf("CBG %d\n",b[x]);
        else if(x==3) printf("CGB %d\n",b[x]);
        else if(x==4) printf("GBC %d\n",b[x]);
        else if(x==5) printf("GCB %d\n",b[x]);


    }
return 0;
}
