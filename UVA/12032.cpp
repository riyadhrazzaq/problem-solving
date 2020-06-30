#include<bits/stdc++.h>

int main()
{
    int t,ts;
    long long int x,i,temp;
    scanf("%d",&ts);
    for(t=1; t<=ts; t++)
    {
        scanf("%d",&x);
        std::vector<int> n;
        std::vector<int> d;
        for(i=0; i<x; i++)
        {
            scanf("%d",&temp);
            n.push_back(temp);
            if(i==0)
            {
                d.push_back(n[0]);
            }
            else
            {
                temp=n[i]-n[i-1];
                d.push_back(temp);
            }
        }

        long long int k;
        k=d[0];
        for(i=1; i<d.size(); i++)
        {
            if(d[i]>)
        }


    }
}
