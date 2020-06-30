#include<stdio.h>
#include<map>
#include<string.h>
using namespace std;
char a[5002];
map<int,long long >dp;
int f=1;

long long acode(int n)
{
    int temp= (a[n-1]-48)*10+(a[n]-48);
    if(n==0) return 1;
    if(n==-1) return 1;
    if(dp[n]!=0) return dp[n];    //memorization

    dp[n] = acode(n-1);
    if(a[n+1]!= '0'&&a[n]!='0')
    {
        if(temp>9&&temp<27)
        {
            dp[n]= acode(n-1) +acode(n-2);
        }
    }
    else if(a[n+1]== '0'&&a[n]=='0') {
        f=0;
    }

    if (f==1) return dp[n];
    else return 0;
}

int main()
{
    char x[]={'0','\0'};
    while(scanf("%s",&a))
    {
        if( !strcmp(a,x) ) break;
        int i,l=strlen(a);
        dp.clear();
        f=1;
        printf("%lld\n",acode(l-1));
    }
}
