#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 999999999
#define pb push_back
#define mp make_pair

vector<pair<int,int> >match;


void anarc(int a[],int n,int b[],int m)
{
    if( match.size()==0 ) match.pb(mp(n-1,m-1));
    int i,lim=max(n,m),x=0,y=0,z=0,p1=0,p2=0;
    for(i=0; i<match.size(); i++)
    {
        while(x!=match[i].first)
        {
            p1+=a[x++];
        }
        while(y!=match[i].second)
        {
            p2+=b[y++];
        }
        p1+=a[x++];
        p2+=b[y++];
        p1=max(p1,p2);
        p2=p1;
    }
    while(x!=n)
    {
        p1+=a[x++];
    }
    while(y!=m)
    {
        p2+=b[y++];
    }
    printf("%d\n",max(p1,p2));
}

int main()
{
    int n,m,i,j;
    while(scanf("%d",&n)&&n!=0)
    {
        int a[n+2],pa=0,pb=0,idx=-1;

        for(i=0; i<n; i++) scanf("%d",&a[i]);
        scanf("%d",&m);
        int b[m+2];
        for(i=0; i<m; i++)
        {
            scanf("%d",&b[i]);
            for(j=idx+1; j<n; j++)
            {
                if( a[j]==b[i] )
                {
                    idx=j;
                    match.pb(mp(j,i));
                    break;
                }
            }
        }
        anarc(a,n,b,m);
        match.clear();
    }
    return 0;
}
