#include<iostream>  
#include <iostream> 
using namespace std;  
int main()  
{  
    int n;  
    char c1,c2,c3;
    int i;  
    while(cin>>n)  
    {  
        if(n==-1)  
            break;  
        int a[26][2]={97,1},count=0,m,b[26]={0};//将数字数组转化为字符  
        for(i=0;i<n;i++)  
        {  
            cin>>c1>>c2>>c3;
            a[c1-97][0]=c1;  
            a[c1-97][1]=a[c3-97][1];  
        }  
        for(i=0;i<26;i++)  
        {  
            if(a[i][1])  
            {  
                b[i]=1;  
                m=i;  
            }  
        }  
        for(i=0;i<26;i++)  
        {  
            if(b[i]&&m!=i)  
            {  
                cout <<char(i+97)<<' '; 
                count++;  
            }  
            else if(b[i])  
            {  
                cout <<char(i+97); 
                count++;  
            }  
        }  
        if(!count)  
            cout<<"none";  
        cout<<endl;  
    }  
    return 0;  
}