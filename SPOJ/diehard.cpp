#include<bits/stdc++.h>
using namespace std;

int fun(int h,int a,int count)
{
    if(h>2&&a>8) return fun(h-2,a-8,count+2);                    // air + water
    else if(h>17&&a>0) return fun(h-17,a+7,count+2);              // air + fire
    else return count+1;
}

int main()
{
    int  t=10,h,a;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&h,&a);
        int count=0;
        printf("%d\n",fun(h,a,count));
    }
}

