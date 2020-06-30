#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,m,j;
    scanf("%d",&n);
    char a[5],x[5];
    unordered_set<string>foo;
    vector<string>fucker;
    for(i=0; i<n; i++)
    {
        scanf("%s%d",&a,&m);

        fucker.push_back(a);
        for(j=0; j<m; j++)
        {
            getchar();
            scanf("%s",&x);
            foo.insert(x);
        }
    }
    for(i=0;i<fucker.size();i++)
    {
        foo.erase(fucker[i]);
    }
    printf("%d",foo.size());


}
