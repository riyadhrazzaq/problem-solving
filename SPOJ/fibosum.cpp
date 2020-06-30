//Finding Nth fibonacci mod 1000000007
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 999999999
#define pb push_back
#define mp make_pair
#define M 1000000007

ll** mul(ll** a,int r1,int c1,ll** b,int r2,int c2)
{

    int i,j;
    ll** d = new ll* [r1];
    for(i=0; i<r1; i++)
        d[i] = new ll [c2];

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            ll z = 0,n=0;
            while(n<c2)
            {
                z+= ( a[i][n]*b[n][j] );
                n++;
            }
            d[i][j] = z % M;
        }
    }
    return d;
}
ll** matrixExp(ll** a,int r,ll n)
{
    int i,j;
    ll** res = new ll* [3];
   // res[0] = new ll res[3]; res[1] = new ll res[3]; res[2] = new ll res[3];
    res[0][0] = 1;res[0][1] = 0;res[0][2] = 0;
    res[1][0] = 0;res[1][1] = 1;res[1][2] = 0;
    res[2][0] = 0;res[2][1] = 0;res[2][2] = 1;
    int x=0;
    while(n)
    {
        if(n&1) res = mul(res,r,r,a,r,r);
        n>>=1;
        a = mul(a,r,r,a,r,r);
    }
    return res;
}
ll nthFibSum(ll x)
{
    ll** a = new ll*[1];
    a[0] = new ll[3];
    a[0][0] = 2;a[0][1] = 1;a[0][2] = 1;    //base
    ll** b = new ll* [3];                       // M
    b[0] = new ll [2];b[1] = new ll [2];b[2] = new ll [2];
    b[0][0] = 1;b[0][1] = 0;b[0][2] = 0;
    b[1][0] = 1;b[1][1] = 0;b[1][2] = 1;
    b[2][0] = 1;b[2][1] = 1;b[2][2] = 1;

    ll** tempN = matrixExp(b,3,x-2);
    ll** ansN = mul(a,1,3,tempN,3,3);

    if(x<=0) return 0;
    else if(x==1) return 1;
    return  ansN[0][0];

}

ll XtoYsum(ll x,ll y)
{
    ll tx = nthFibSum(x-1);
    ll ty = nthFibSum(y);
	ll res = (ty<tx)?(1000000007+(ty-tx)):ty-tx;
    return res;
}

int main()
{

    int i,j,m,r,r2,c,c2,t;
    ll x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld%lld",&x,&y);
        ll ans = XtoYsum(x,y);
        printf("%lld\n",ans);

    }

    return 0;
}
