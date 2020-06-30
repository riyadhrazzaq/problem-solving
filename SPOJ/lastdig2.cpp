#include<bits/stdc++.h>
int main()
{
    int t,la;
    char a[1002];
    uint64_t b;
    scanf("%d",&t);
    while(t--)
    {
        getchar();
        scanf("%s%llu",a,&b);
        la=strlen(a);
        int n = a[la-1] -48, exp[6],x=2,res,mod;
        exp[1] = n;
        while((int) pow((double) n,(double) x)%10!=n )
		{
			exp[x]= (int) pow((double) n,(double) x)%10;
			x++;
		}
		x--;
        if(n==5) res=n;
        else
        {
            mod = b% x;
            res= (mod ==0 ) ?exp[x]:exp[mod];
        }
        res= (b==0)?1:res;
        printf("%d\n",res);
    }

}
