#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while(scanf("%d",&t)&&t!=0)
    {
        int c=1,f=1,n;
        stack<int >side;
        for(int i=1; i<=t; i++)
        {
            scanf("%d",&n);
            if(n==c)
            {
                c++;
            }
            else
            {
                while(side.size()>0&&side.top()==c)
                {
                    side.pop();
                    c++;
                }
                side.push(n);
            }
        }
        while(side.size()>0)
        {
            if(side.top()!=c)
            {
                f=0;
                break;
            }
            else
            {
                c++;
            }
            side.pop();
        }
        if(f==1) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
