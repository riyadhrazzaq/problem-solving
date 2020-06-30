#include<stdio.h>
#include<string.h>

using namespace std;

int main()
{
    int m,n,i,j,c=1;
    char s[100][100];
    int in[10][10]= {0};
    while(scanf("%d%d",&m,&n)&&m!=0&n!=0)
    {
        int in[100][100]= {0};;
        getchar();
        if(c>1) printf("\n");
        for(i=0; i<m; i++)
        {
            gets(s[i]);
        }


        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                if(s[i][j]=='*')
                {
                    in[i-1][j-1]=in[i-1][j-1]+1 ;
                    in[i-1][j]=in[i-1][j]+1 ;
                    in[i-1][j+1]=in[i-1][j+1]+1 ;

                    in[i][j-1]=in[i][j-1]+1 ;
                    in[i][j+1]=in[i][j+1]+1 ;

                    in[i+1][j-1]=in[i+1][j-1]+1 ;
                    in[i+1][j]=in[i+1][j]+1 ;
                    in[i+1][j+1]=in[i+1][j+1]+1 ;
                }
            }
        }
        printf("Field #%d:\n",c++);

        for(i=0; i<m; i++)
        {

            for(j=0; j<n; j++)
            {
                if(s[i][j]=='*')
                {
                    printf("*");
                }
                else printf("%d",in[i][j]);
            }
            printf("\n");
        }




    }
    return 0;
}
