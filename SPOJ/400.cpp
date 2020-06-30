#include<stdio.h>
#include<string.h>
int main()
{
    int t,i;
    char a[200],b[200];
    while(scanf("%d",&t)&&t!=0)
    {
        getchar();
        scanf("%[^\n]%*c",a);
        int l= strlen(a);
        int x=0,k,f=0,y= (t*2)-1 ,z=1 ;
        for(i=0;i<t;i++)
        {
            k=i; f=0;

            while(k<l)
            {
                b[x++] = a[k];

                if( f==0) { k+= y; f=1;}
                else { k+=z; f=0; }
            }
            y-=2; z+=2;
        }
        b[x]= '\0';
        printf("%s\n",b);

    }
}
