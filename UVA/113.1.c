#include<stdio.h>
double root1(int a, int b);
int main()
{
    int x,y;
    double root;
    scanf("%d%d",&x,&y);
    root=root1(x,y);
    root= pow(root, y);
    printf("%.3f\n",root);

    return 0;
}
double root1(int a, int b)
{
    int j;
    double i,k=1;
    double incre = 0.01;
    for(i=1; i<=a; i = i+incre)
    {
        for(j=0;j<b;j++)
        {
            k=k*i;
        }
        if(a<k)
        {
            return(i-incre);
            break;
        }
        else
            k=1;
    }
}
