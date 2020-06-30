#include<bits/stdc++.h>

using namespace std;
int main()

{
    int n,i;
    while(scanf("%d",&n)&&n!=-1)
    {
        int a[n],sum=0,cnt=0;

        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum+=a[i];
        }
        float avg= (float)sum/n;

        if(ceilf(avg)==avg)
        {
            for(i=0;i<n;i++)
            {
                if(a[i]<avg)
                {
                    cnt+= (avg-a[i]);
                }
            }
            cout<<cnt<<endl;
        }
        else {
            cout<<"-1"<<endl;
        }

    }
    return 0;
}
