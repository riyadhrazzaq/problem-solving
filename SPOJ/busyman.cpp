#include<bits/stdc++.h>
using namespace std;

struct event{
    int s;
    int f;
};
int main()
{
    int t=10,n,i;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        event act[n];
        for(i=0;i<n;i++)
        {
            scanf("%d%d",&act[i].s,&act[i].f);
        }
        sort(act,act+n,[] (event lhs,event rhs){ return lhs.f<rhs.f; });
        int cnt=1,now = 0;

        for(i=1;i<n;i++)
        {
            if( act[i].s>= act[now].f ) {
                cnt++;
                now= i;
            }
        }
        printf("%d\n",cnt);
    }
}
