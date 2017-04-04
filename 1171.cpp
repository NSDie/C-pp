#include<iostream>
#include<stdio.h>
using namespace std;  
typedef long long LL;  
const int maxn=1005;  
char s[maxn];  
  
int main()  
{  
    while (~scanf("%s",s))  
    {  
        int a=0,b=0,c=0,i,j;  
        for (i=0,j=1;s[i]!='+';i++,j*=10) a+=j*(s[i]-'0');  
        for (i++,j=1;s[i]!='=';i++,j*=10) b+=j*(s[i]-'0');  
        for (i++,j=1;s[i];i++,j*=10) c+=j*(s[i]-'0');  
        if (a+b==c) printf("True\n"); else printf("False\n");  
        if (!strcmp(s,"0+0=0")) break;  
    }  
    return 0;  
}  