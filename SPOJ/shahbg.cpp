#include<bits/stdc++.h>
using namespace std;
#define setBit(a) ( x[a/32] = x[a/32] | 1<<(a%32) )
#define chkBit(i) ( (x[i/32]>>(i%32))&1 )



//check bit to compute

int main()
{
    int n,i,x[650],c=0,a,flag,j,left,right;
    memset(x,0,sizeof(x));
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {

        scanf("%d",&a);
        setBit(a);
        left= a-1; right = a+1;
        if(chkBit(left)==0&&chkBit(right)==0) c++;
        else if (chkBit(left)&&chkBit(right)) c--;

        printf("%d\n",c);
    }
    printf("Justice\n");

}
