#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    char n[100];
    while(scanf("%s",n))
    {

        int l,k,i,s=0,z;
        l=strlen(n);
        if(l==1&&(n[0]-48)==0) break;
        else
        {
            k=l-1;
            for(i=0; i<l; i++)
            {
                z=k+1;

                s=s+((n[i]-48)*(pow(2,z)-1));
                k--;
            }
            printf("%d\n",s);
        }

    }
    return 0;
}
