#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 999999999
#define pb push_back
#define mp make_pair

int main()
{
    freopen("inspoj.txt","r",stdin);
    int t,i,m,j,a,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&m);
        getchar();
        vector<string>num;
        vector<int>wt[m];
        for(i=0; i<m; i++)
        {
            char temp[11];
            scanf("%s",temp);
            getchar();
            string s;
            s = temp;
            num.pb(s);
            int n=0;
            for(j=0; j<s.length(); j++)
            {
                n+= s[j];
                wt[i].pb(n);
//                printf("%c %d,",s[j],wt[i][j]);
            }
//            cout<<endl;
        }

        int f=0;
        for(i=0; i<m; i++)
        {
            a= num[i].length();
            for(j=i+1; j<m; j++)
            {
                b= num[j].length();
                if(a<b)
                {
                    if(wt[j][a-1]==wt[i][a-1])
                    {
//                        printf("%d==%d\n",wt[i][a-1],wt[j][a-1]);
                        if(num[j].compare(0,a,num[i])==0) f=1;
                    }
                }
                else if(a>b)
                {
                    if(wt[i][b-1]==wt[j][b-1])
                    {
//                        printf("%d==%d\n",wt[j][b-1],wt[i][b-1]);
                        if(num[i].compare(0,b,num[j])==0) f=1;
                    }
                }
                else if(a==b) {
                    if(num[i].compare(num[j])==0) f=1;
                }
                if(f==1) break;
            }
            if(f==1) break;
        }
        if(f==1) printf("NO\n");
        else printf("YES\n");

    }
}

