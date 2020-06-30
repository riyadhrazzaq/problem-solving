#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,j;
    stack<char>x;
    scanf("%d",&t);
    for(j=0; j<t; j++)
    {
        getchar();
        char a[400];
        int i=0,k;
        gets(a); //spoj do not support gets(). use cin.
        int l= strlen(a);
        for(i=0; i<l; i++)
        {
            if(a[i]>=97&&a[i]<=122)
            {
                cout<<a[i];
            }
            else if(a[i]==42||a[i]==43||a[i]==45||a[i]==47||a[i]==94)
            {
                x.push(a[i]);
            }
            else if(a[i]==41)
            {
                cout<<x.top();
                x.pop();
            }

        }
        cout<<endl;
    }
}
