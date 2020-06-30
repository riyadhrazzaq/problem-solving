#include<stdio.h>
int main()
{
    int a[10]={1,2,2,3,4,5,5,6,9,10},n,lo,hi,mid,i,x[10];


    scanf("%d",&n);
    lo=1;hi=10;
    i=0;
    while(lo<=hi){
        mid=(lo+hi)/2;
        if(n>a[mid]) lo=mid+1;
        else if(n<a[mid]) hi=mid-1;
        else { break;}
        //else { x[i]=mid; i++; break; }
    }
    if(lo>hi) {printf("not found\n");}
    else {printf("found\n");}
    return 0;
}
