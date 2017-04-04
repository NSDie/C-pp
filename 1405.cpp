#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;


int main()
{
    __int64 a,b,c,d;
    char s[20];
    while (~scanf("%I64d%I64d",&a,&b)){
        memset(s,0,sizeof(s));
        int t = 0,n = 0;
        c = a - b;
        if(c>=0)
        d=c;
        else
        d=-c;
        while (d){
            s[n++] = ((d%10)+'0');
            t++;
            if (t%3 == 0 && d/10!=0)
                s[n++] = ',';
            d /= 10;
        }
        if (c < 0)
            cout <<'-';
        if (c != 0)
            for (int i = n-1;i >= 0;--i )
              cout <<s[i];
        else
            cout <<'0';
      cout <<endl;
        
    }
    return 0;
}