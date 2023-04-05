#include<stdio.h>
#include<math.h>
void test_case(void);
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        test_case();
    }
}

void test_case(void)
{
    int i,j,x,y,m[9][9],x1=0,x2=0,y1=0,y2=0;
    for(i=1;i<=8;i++)
    {
        for(j=0;j<=8;j++)
        {
            m[i][j]=0;
        }
    }
    scanf("%d%d",&x,&y);
    if(x==1 && y==1)
    {   x1=3;
        y1=2;
    }
    else if(x==1 && y==8)
    {
        x1=3;
        y1=7;
    }
    else if(x==8 && y==1)
    {
        x1=7;
        y1=3;
    }
    else if(x==8 && y==8)
    {
        x1=7;
        y1=6;
    }
    else{
        if(y==1 || y==8)
        {
            x1=x+1;
            x2=x-1;
            if(y>6)
                {
                    y1=y-2;
                    y2=y-2;
                }   
            else 
                {
                    y1=y+2;
                    y2=y+2;  
                }      
        }
        else if(x==1 || x==8)
        {
            y1=y+1;
            y2=y-1;
            if(x>6)
                {
                    x1=x-2;
                    x2=x-2;
                }    
            else 
                {
                    x1=x+2;
                    x2=x+2;
                }
        }
        else if(x==2 && y==2)
        {
            x1=1;
            y1=5;
            x2=4;
            y2=1;
            // m[4][3]=2;
        }
        else if(x==7 && y==2)
        {
            x1=5;
            y1=1;
            x2=8;
            y2=5;
            // m[8][4]=2;
        }
        else if(x==2 && y==7)
        {
            x1=1;
            y1=5;
            x2=5;
            y2=8;
            // m[4][8]=2;
        }
        else if(x==7 && y==7)
        {
            x1=5;
            y1=8;
            x2=8;
            y2=4;
            // m[8][5]=2;
        }
        else  {
            if(y!=2 && y!=7)
            {
                x1=x-1;
                x2=x+1;
                y1=y+2;
                y2=y-2;
            }
            else{
                // printf("x\n");
                x1=x-2;
                x2=x+2;
                y1=y+1;
                y2=y-1;
            }
        }

    }
    m[x1][y1]=2;
    m[x2][y2]=2;
    m[x][y]=1;
    for(i=1;i<=8;i++)
    {
        for(j=1;j<=8;j++)
        {
            // m[i][j]=0;
            printf("%d ",m[i][j]);
        }
        printf("\n");
    }
}    