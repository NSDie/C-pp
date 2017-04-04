#include<cstdio>
#include<iostream>
using namespace std;
const int N=260;
int a[N][100];
int main()
{
    int n,i,j;
    memset(a,0,sizeof(a));
    a[1][0]=1;
    a[2][0]=3;
    int c=0;
    for(i=3;i<=N;i++)
    {
        c=0;
        for(j=0;j<=100;j++)
           {
               a[i][j]=a[i-1][j]+2*a[i-2][j]+c;
               c=a[i][j]/10;
               a[i][j]%=10;
           }
    }
       while(~scanf("%d",&n))
       {
           if(n==0)
            printf("1\n");
           else
           {
               for(i=99;i>=0;i--)
                if(a[n][i])
                break;
               for(j=i;j>=0;j--)
                printf("%d",a[n][j]);
               printf("\n");
           }
       }
       return 0;
}
