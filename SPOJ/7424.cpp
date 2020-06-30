#include<stdio.h>
#include<bits/stdc++.h>
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)&&a!=-1&&b!=-1)
    {
        if(a<b) std::swap(a,b);

        if(a==b) printf("%d\n",(a==0)? 0:1 );
        else if(a==0||b==0) printf("%d\n", (a==0) ? b : a );
        else {
            int r;
            r= ceil((float) a/ (b+1));
            printf("%d\n",r);

        }
    }
}
