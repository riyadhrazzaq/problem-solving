    #include<iostream>
    using namespace std;
    int main()
    {
        int t,res=0,n;
        scanf("%d",&t);
        while(t--)
        {
            cin>>n;
            (n>0)?res+=n:res+=0;
        }
        cout<<res<<endl;
    }
