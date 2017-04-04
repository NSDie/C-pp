#include<cstdio>
#include<iostream>
using namespace std;

char a[102][102];
int n,m;
int judge(int x,int y)
{
    if(x<0||y<0||x>=n||y>=m)
        return 0;
    else if(a[x][y]=='*')
        return 1;
    else return 0;
}
int main()
{
    while(~scanf("%d %d",&n,&m))
    {
        if(n==0&&m==0)break;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            cin>>a[i][j];
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=0;j<m;j++)
            {
                sum=0;
                if(a[i][j]=='.')
                {
                  if(judge(i,j+1))
                    sum++;
                  if(judge(i,j-1))
                    sum++;
                  if(judge(i+1,j))
                  sum++;
                  if(judge(i-1,j))
                  sum++;
                  if(judge(i+1,j+1))
                  sum++;
                  if(judge(i+1,j-1))
                  sum++;
                  if(judge(i-1,j+1))
                  sum++;
                  if(judge(i-1,j-1))
                  sum++;
                  a[i][j]=sum+'0';
                }
            }

        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                printf("%c",a[i][j]);
            }
            printf("\n");
        }
        printf("\n");//一开始是PE
    }
    return 0;
}