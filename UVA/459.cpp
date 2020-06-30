#include<stdio.h>
#include<iostream>
#include<string.h>
#include<unordered_set>

using namespace std ;

char arr[26];

char findParent(char a)
{
    int temp=a-16-'0';
    if( arr[temp]== a ) return a;
    else
    {
        arr[temp]=findParent(arr[temp]);
        return arr[temp];
    }
}
void make_friend(char a, char b)
{
    char x= findParent(a);
    char y= findParent(b);

    if(x!=y) arr[x-16-'0']=y;
}
int main()
{
    int t,ts, i,j;
    char lt;
    scanf("%d",&t);
    getchar();
    printf("\n");

    for(ts=0; ts<t; ts++)
    {

        scanf("%c",&lt);////////////////////// E
        int limit= lt-16-'0';

        for(i=0; i<limit; i++)
        {
            int temp=65+i;
            arr[i]= temp;
        }
        arr[i]='\0';
        char x,y;
        while(scanf("%c%c",&x,&y)&&x!='\0')
        {
            printf("%c--%c",x,y);
            make_friend(x,y);
            getchar();
        }
        for(i=0; i<limit; i++)
        {
            findParent(arr[i]);
        }
        unordered_set< char >st(arr,arr+limit);
        printf("%d\n",st.size());

    }
}
