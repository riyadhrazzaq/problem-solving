#include<bits/stdc++.h>
using namespace std;

int stall[100000],n,cow;
int* dis= new int[10000];

bool predicate(int x)
{
    int c=1,index=0,i=1;
    while(c<cow&&i<n)
    {
        if(stall[i]-stall[index]>=x)
        {
            c++;
            index=i;
        }
        i++;
    }

    if(c==cow) return true;
    else return false;
}


int  binarySearch(int lo, int hi)
{
    int mid;
    while(lo<hi)
    {
        mid = lo + (hi-lo+1)/2;
        if(predicate(mid)==true) lo=mid;
        else hi = mid-1;
    }
    return lo;
}
int main()
{
    int t,i,index,temp;
     scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&cow);
        for(i=0; i<n; i++)
        {
            scanf("%d",&stall[i]);
        }
        sort(stall,stall+n);
        int l= stall[1]-stall[0], u=stall[n-1]-stall[0];
        int r= binarySearch(l,u);
        printf("%d\n",r);
    }

}
