//size_t find (const char* s, size_t pos, size_t n) const;
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,res[8],i;
    char temp[41];
    scanf("%d",&t);
    while(t--)
    {
        memset(res,0,sizeof(res));
        scanf("%d",&n);
        getchar();
        scanf("%s",temp);
        string str(temp);
        for(i=0;i<38;i++)
        {
            if( !str.compare(i,3,"TTT")) res[0]++;
            else if( !str.compare(i,3,"TTH") ) res[1]++;
            else if( !str.compare(i,3,"THT") ) res[2]++;
            else if( !str.compare(i,3,"THH") ) res[3]++;
            else if( !str.compare(i,3,"HTT") ) res[4]++;
            else if( !str.compare(i,3,"HTH") ) res[5]++;
            else if( !str.compare(i,3,"HHT") ) res[6]++;
            else if( !str.compare(i,3,"HHH") ) res[7]++;
        }
        printf("%d ",n);
        for(i=0;i<=7;i++) printf("%d ",res[i]);
        printf("\n");

    }
}
