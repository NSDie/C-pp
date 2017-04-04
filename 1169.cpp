#include<iostream>
using namespace std;
const int N = 205;
int map[N][N], n;
void fun()
{
    for(int k = 1; k <= n; ++k)
        for(int i = 1; i <= n; ++i)
            for(int j = 1; j <= n; ++j)
                map[i][j] |= (map[i][k] & map[k][j]);
}
int main()
{
    int a, b;
    char s[30];
    while(cin>>n && n)
    {
        memset(map, 0, sizeof(map));
        while(cin>>a>>b, a){
            cin>>s;
            int len = strlen(s);
            for(int i = 0; i < len; ++i)
                map[a][b] |= (1 << (s[i]-'a'));
        }
        fun();
        while(cin>>a>>b, a)
        {
            for(char c = 'a'; c <= 'z'; ++c)
                if(map[a][b] & (1 << c - 'a')) 
                   cout <<c;
            if(map[a][b] == 0) 
                cout << '-';
           cout <<endl;
        }
        cout <<endl;
    }
    return 0;
}