#include<stdio.h>
int main()
{
    int i,n,x,y,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d",&x,&y);

        if (x>y&&x%2!=0&&y%2==0){ sum=0;
            while(y<x-2){ y++; sum=sum+y; y++; }
        }

        else if(x>y&&x%2!=0&&y%2!=0){sum=0;
            while(y<x-2){ sum=sum+(y+2); y+=2;}
        }

        else if(x>y&&x%2==0&&y%2==0){sum=0;
            while(y<x){y++; sum=sum+y; y++;}
        }
        else if(x>y&&x%2==0&&y%2!=0){sum=0;
            while(y<x-1) { sum=sum+(y+2); y+=2;  }
        }

        else if (y>x&&y%2!=0&&x%2==0){sum=0;
            while(x<y-2){ x++; sum=sum+x; x++; }
        }
        else if(y>x&&y%2!=0&&x%2!=0){sum=0;
            while(x<y-2){ sum=sum+(x+2); x+=2;}
        }
        else if(y>x&&y%2==0&&x%2==0){sum=0;
            while(x<y){x++; sum=sum+x; x++;}
        }
         else if(y>x&&y%2==0&&x%2!=0){sum=0;
            while(x<y-1) { sum=sum+(x+2); x+=2;  }
        }
        else if(x=y){sum=0;}

        printf("%d\n",sum);
    }

}
