#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 999999999
#define pb push_back
#define mp make_pair

int GCD(int a,int b)
{
    if(b==0) return a;
    else return GCD(b,a%b);
}

int numofDiv(int n)
{
    int i,lim= sqrt(n),c=0;
    for(i=1;i<=lim;i++)
    {
        if(n%i==0) (n/i!=i)?c+=2:c++;
    }
    return c;
}

int main()
{
    int t,gcd,a,b,res;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        gcd= (a==0)?b:(b==0)?a:GCD(a,b);
        res = numofDiv(gcd);
        printf("%d\n",res);
    }
}


