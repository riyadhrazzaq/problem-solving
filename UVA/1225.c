#include<stdio.h>
int main()
{
    int n,x,k,ts,t,i;
    scanf("%d",&ts);
    for(t=1;t<=ts;t++){
        scanf("%d",&n);
        int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,m=0,j=0;
        for(i=1;i<=n;i++){
                k=i;
            while(k!=0)
            {
                x=k%10;
                if(x==0) a++;
                else if(x==1) b++;
                else if(x==2) c++;
                else if(x==3) d++;
                else if(x==4) e++;
                else if(x==5) f++;
                else if(x==6) g++;
                else if(x==7) h++;
                else if(x==8) m++;
                else if(x==9) j++;
                k=k/10;
            }
        }
        printf("%d %d %d %d %d %d %d %d %d %d\n",a,b,c,d,e,f,g,h,m,j);
    }
    return 0;
}
