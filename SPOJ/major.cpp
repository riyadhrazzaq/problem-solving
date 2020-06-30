#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        unordered_map<int,int> cont;
        int x,flag=0,n,temp;
        scanf("%d",&n);
        for(int i = 0;i<n; i++)
        {
            scanf("%d",&x);
            if(cont.count(x)==0){ cont[x] = 1; }
            else {
                cont[x]= cont[x] +1;
            }
            if(cont[x]>n/2) { flag= 1;  temp = x;    }
        }
        if(flag==1) printf("YES %d\n",temp);
        else printf("NO\n");
    }
}
