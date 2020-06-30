#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i;
    int k,index=0,n,m,t;
    scanf("%d",&t);
    while(t--&&t>=0)
    {
        scanf("%d%d",&m,&n);
        int del=floor(sqrt(n))+1;
        long long int prime[100000];

        int seg[del+1];
        for(i=2; i<=del; i++) seg[i]=true;

        for(i=2; i<=sqrt(del); i++)
        {
            if(seg[i]==true)
            {
                for(k=i*2; k<=del; k+=i)
                {
                    seg[k]=false;
                }

            }
        }
        for(i=2; i<=del; i++)
        {
            if(seg[i]==true)
            {
                prime[index++]=i;   //this holds PRIME numbers
                if(i>=m&&i<=n) cout<<i<<endl;
            }
        }

        //seg

        long long int low= del+1, high= low+del;
        while(low<n)
        {
            if(high>n)
            {
                high=n;
            }
            bool temp[del+1];
            memset(temp,true,sizeof(temp));
            for(i=0; i<index; i++)
            {
                long long int mlow=(low/prime[i])*prime[i];
                if(mlow<low) mlow+=prime[i];

                for(k=mlow; k<=high; k+=prime[i])
                {
                    temp[k-low]=false;
                }
            }
            for(i=0; i<del+1; i++)
            {
                if(temp[i]==true)
                {
                    if(i+low>=m&&i+low<=n) cout<<i+low<<endl;
                    else if(i+low>n) return 0;
                }
            }
            low=high+1;
            high=low+del;
        }
        cout<<endl;
    }

}

