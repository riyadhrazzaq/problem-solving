#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MAX 999999999
#define pb push_back
#define mp make_pair
#define x_axis x+vuj[i]
#define y_axis y+koti[i]


char inp[51][51];
int vuj[] = {-1,-1,-1,0,0,1,1,1};
int koti[] = {-1,0,1,-1,1,-1,0,1};
int n,m,i,j;
int fun(int var,int x,int y,int count)
{

    for(i=0; i<8; i++)
    {
       // printf("currently: inp[%d][%d] '%c' but searching '%c'\n",x_axis,y_axis,inp[x_axis][y_axis],var+1);
        if( x_axis>=0&&y_axis>=0&& x_axis <n && y_axis<m && inp[x_axis][y_axis]==var+1 )
        {
           // printf("found '%c'..\n",var+1);
            count = max(count, fun(var+1,x_axis,y_axis,count+1));
        }

    }
    return count;
}
void memneg(){
	for(i=0;i<51;i++){
		for(j=0;j<51;j++){
			inp[i][j]==0;
		}
	}
}

int main()
{
    int ts=1;
    while(scanf("%d%d",&n,&m)&&n!=0&&m!=0)
    {
        vector<pair<int,int>>a;
        getchar();
        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
                scanf("%c",&inp[i][j]);
                if(inp[i][j]==65) a.pb(mp(i,j));
            }
            getchar();
        }
        int res=0,count,var=65,k;
        for(k=0; k<a.size(); k++)
        {
            count=1;
            //printf(">calling at %d,%d\n",a[k].first,a[k].second);
            res = max(res,fun(var,a[k].first ,a[k].second,count));
        }
        printf("Case %d: %d\n",ts++,res);
        memset(inp,0,sizeof inp);
        a.clear();
    }
    return 0;
}

