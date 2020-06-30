#include<stdio.h>
int main()
{
    int i,a[5],max,min,smax,smin;
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    max=a[0];
    min=a[0];
    for(i=0;i<5;i++){
            if(a[i]>max) max=a[i];
            if(a[i]<min) min=a[i];
    }
    smax=a[0];
    smin=a[0];
    for(i=0;i<5;i++){
        if(a[i]!=max&&a[i]>smax) smax=a[i];
        if(a[i]!=min&&a[i]<smin) smin=a[i];
    }
    printf("The average is %.2f",(float)(max+smax)/2);
    return 0;
}
