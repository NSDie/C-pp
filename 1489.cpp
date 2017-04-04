#include <iostream> 
#include <string>
#include <cctype>
using namespace std;
int main()
{
    string s,map;
    while (cin >> map){
        getchar();
        getline(cin,s);
        for (int i = 0;i < s.length();i++)
            if (isalpha(s[i]))
                printf("%c",islower(s[i])?tolower(map[s[i]-'a']):map[s[i]-'A']);
            else
                printf("%c",s[i]);
        putchar('\n');
    }
    return 0;
}