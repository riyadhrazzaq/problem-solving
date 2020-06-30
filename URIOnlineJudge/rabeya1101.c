#include<stdio.h>
int main()
{
    int i, j, x, z, s,y;
    while (scanf("%d %d", &x, &y) && x > 0 && y > 0)
    {
        s = 0;
        if (j < i)
        {
            i = x;
            x = y;
            y = i;
        }
        for (i = x; i <= y; i++)
        {
            printf("%d ", i);
            s =s+ i;
        }
        printf("Sum=%d\n", s);
    }
    return 0;
}
