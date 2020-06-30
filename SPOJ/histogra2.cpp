#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define MAX 999999999
#define pb push_back
#define mp make_pair

ll max(ll a,ll b) { return (a>b)?a:b; }

ll maxAreaFinder(ll hist[],int n)
{
    int i,x;
    ll area= 0,temp;
    stack<int>s;
    for(i=0; i<n; i++)
    {
        if(s.empty())
        {
            s.push(i);
        }
        else
        {
            while(hist[i] < hist[s.top()])
            {
                x  = s.top();
                s.pop();
                if(s.empty()) { temp = hist[x]*i;  area = max(area, temp); break; }
                else { temp = hist[x]* (i-s.top() -1 ); } area  = max(area,temp );
            }
            s.push(i);
        }
    }

    while(!s.empty())
    {
        x = s.top();
        s.pop();
        if(s.empty()) { temp = hist[x]*i; area = max(area, temp); }
        else { temp  = hist[x]*(i-s.top()-1); area = max(area,temp); }
    }
    return area;
}

int main()
{
    freopen("stdin.txt","r",stdin);
    int n,i;
    while(scanf("%d",&n)&&n!=0)
    {
        ll a[n];
        for(i=0; i<n; i++)
            scanf("%lld",&a[i]);
        printf("%lld\n",maxAreaFinder(a,n));
    }
}

