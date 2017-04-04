#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int a1[1001];
    int a2[1001];
    int temp[1001];
    int n;
    int i,j=0;
    while(scanf("%d",&n)!=EOF)
    {
        memset(a1,0,sizeof(a1));
        memset(a2,0,sizeof(a2));
        memset(temp,0,sizeof(temp));
        a1[0]=1;
        a2[0]=1;
        if(n==0) cout<<"0";
        else if(n==1||n==2) cout<<"1";
        else 
        {
        for(i=0;i<n-2;i++)
        {
            for(j=0;j<1001;j++)
                temp[j]=a2[j];
            for(j=0;j<1001;j++)
            {
                a2[j]=a1[j]+a2[j];
                if(a2[j]>=10)
                {
                    a2[j]-=10;
                    a2[j+1]++;
                }
            }
        for(j=0;j<1001;j++)
            a1[j]=temp[j];
        }
        bool flag=false;//用于判断前导零，从问题求解老师那边得到方法
        for(i=1000;i>=0;i--)
        {
            if(flag) cout <<a2[i];
            else if(a2[i])
            {
                cout<< a2[i];
                flag=true;
            }
        }
        }
     cout<<endl;
    }
    return 0;
}