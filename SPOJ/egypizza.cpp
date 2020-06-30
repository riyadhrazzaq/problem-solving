#include<stdio.h>
#include<string.h>
#include<algorithm>
int main()
{
    while(1)
    {

        char x[3];
        int n,a=0,b=0,c=0,res=0; //a=1/2 b=3/4 c=1/4
        scanf("%d",&n);
        while(n--)
        {
            getchar();
            scanf("%s",&x);
            if(strcmp(x,"1/2")==0) a++;
            else if(strcmp(x,"3/4")==0) b++;
            else if(strcmp(x,"1/4")==0) c++;
        }
        if(a==0) res = (b+c)/2 + (b+c)%2;
        else if(b==0) res= ((c/2+c%2)+a)/2+((c/2+c%2)+a)%2 ;
        else if(c==0) res= a/2 + a%2 + b;
        else printf("Left %d Right %d far right %d\n",a/2 + a%2 + (b+c)/2+ (b+c)%2, b+ ((c/2+c%2)+a)/2+ ((c/2+c%2)+a)%2, (b+(2*c-a))/2 + (c/2 +a)/2+ (c/2 +a)%2 );
//            res = std::min( a/2 + a%2 + (b+c)/2+ (b+c)%2, b+ ((c/2+c%2)+a)/2+ ((c/2+c%2)+a)%2  );

        printf("%d\n",res+1);
    }
}
