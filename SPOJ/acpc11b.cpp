#include<stdio.h>
#include<algorithm>
#include<limits.h>
#include<string.h>
using namespace std;

int a[1001],b[1001],c[1001], allMin= INT_MAX,prevMin,la,lb;

bool predicate(int a,int b)
{
    if( abs(a-b) <=prevMin ) return true;
    else return false;
}

void bsearch(int lo,int hi,int key)
{
    int f=0;
    if(key<=b[lo])
    {
        f=1;
    }
    if(key>=b[hi])
    {
        f=1;
        lo=hi;
    }
    else
        while(lo<=hi)            //go left
        {
            int mid= (lo+hi)/2;
            if((lo+hi) & 1) mid++;
            if(b[mid]==key)
            {
                lo=mid;
                break;
            }
            if( predicate(key,b[mid])) lo=mid;
            else hi=mid-1;
            prevMin = abs(key-b[mid]);
        }
    int x=lo-2,y=lo-1,z=lo;
    if(x<0) x=0;
    if(y<0) y=0;
    if(z<0) z=0;
    if(x>=lb) x=lb-1;
    if(y>=lb) y=lb-1;
    if(z>=lb) z=lb-1;

//    printf("key [%d]%d %d %d\n",key,b[x],b[y],b[z]);
    int tmp= min({ abs(key-b[x]),abs(key-b[y]),abs(key-b[z]) });
    if(tmp<allMin) allMin=tmp;
}

int main()
{
    int t,i,j,k;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&la);
        for(i=0; i<la; i++) scanf("%d",&a[i]);
        scanf("%d",&lb);
        for(i=0; i<lb; i++)
        {
            scanf("%d",&b[i]);
        }
        sort(b,b+lb);
//        for(i=0; i<lb; i++) printf("%d ",b[i]);
//        printf("\n");

        for(i=0; i<la; i++)
        {
            prevMin=INT_MAX;
            bsearch( 0,lb-1,a[i] );
        }
        printf("%d\n",allMin);
        memset(a,0,sizeof a);
        memset(b,0,sizeof b);
        allMin=INT_MAX;

    }
}
