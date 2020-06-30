#include<stdio.h>
#include <bits/stdc++.h>
int main()
{
    double ax,ay,bx,by,cx,cy,dx,dy;
    while(scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&ax,&ay,&bx,&by,&cx,&cy,&dx,&dy)!=EOF)
    {
        if(ax==bx&&ay==by) {
                std::swap(ax,cx);
                std::swap(ay,cy);
        }
        else if(ax==cx&&ay==cy) {
                std::swap(ax,bx);
                std::swap(ay,by);
        }
        else if(ax==dx&&ay==dy) {
                std::swap(ax,bx); std::swap(ay,by);
                std::swap(cx,dx); std::swap(cy,dy);

        }
        else if(bx==dx&&by==dy) {
                std::swap(cx,dx);
                std::swap(cy,dy);
        }

        printf("%.3lf %.3lf %.3lf %.3lf %.3lf %.3lf %.3lf %.3lf\n",ax,ay,bx,by,cx,cy,dx,dy);
        printf("%.3lf %.3lf\n",(ax+(dx-cx)),(ay+(dy-cy)));
    }
    return 0;
}
