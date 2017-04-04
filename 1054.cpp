#include<iostream>  
#include<string>  
#include<cstdio>  
using namespace std;  
  
int main()  
{  
    int row;  
    string str;  
    cin >> row;  
    getline(cin, str);  
    while (row--)  
    {  
        getline(cin, str);  
        int len = str.size();  
        while (len--)  
            cout << str[len];  
        cout << endl;  
    }  
    return 0;  
}