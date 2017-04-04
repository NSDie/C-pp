#include<iostream>
#include<cstring>
using namespace std;
char s1[81],s2[81];
int a1[81],a2[81];
int c[6410];
int main()
{
    int i,j=0;
    int e=0,k;
    memset(s1,'\0',sizeof(s1));
    memset(s2,'\0',sizeof(s2));
    memset(a1,0,sizeof(a1));
    memset(a2,0,sizeof(a2));
    memset(c,0,sizeof(c));
    while(cin>>s1>>s2)
    {
        j=0;
        int len1=strlen(s1);
        int len2=strlen(s2);
        for(i=len1-1;i>=0;i--)
            a1[j++]=s1[i]-'0';
        j=0;
        for(i=len2-1;i>=0;i--)
            a2[j++]=s2[i]-'0';
        j=0;
        e=0;
        for(i=0;i<len1;i++)
        {
            k=i;//位数的移动 
            for(j=0;j<len2+1;j++)//加一是为了进位也能够存储下来（即使接下来没有两个数的相乘） 
            {
                c[k]=a2[j]*a1[i]+c[k]+e;
                e=c[k]/10;
                c[k]%=10;
                k++;
            }
        }
        bool flag=false;
        for(i=6409;i>=0;i--)
        {
            if(flag) cout<< c[i];
            else if(c[i])
            {
                cout<< c[i];
                flag=true;
            }
            else if(c[i]==0&&i==0)
            {
                cout<<c[i];
            }
            
        }
        cout<<endl;
        memset(s1,'\0',sizeof(s1));
        memset(s2,'\0',sizeof(s2));
        memset(a1,0,sizeof(a1));
        memset(a2,0,sizeof(a2));
        memset(c,0,sizeof(c));
    }
    return 0; 
}