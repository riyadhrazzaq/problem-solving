#include<stdio.h>
int main()
{
    int i,n;
    float a1,a2,a3;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%f",&a1);
        scanf("%f",&a2);
        scanf("%f",&a3);
            printf("%.1f",(a1*2+a2*3+a3*5)/10);

    }
    return 0;
}

