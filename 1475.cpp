#include<iostream>
#include<map>//ͷ�ļ�
#include<cstring>
using namespace std;
int main()
{
    int n;
    string s;
    map<string,int>m;//
    while(cin>>n)
    {
        getchar();//����س���Ҳ����û�������䣬��Ϊʹ����cin�ƺ���ɻس������˵�
        
        m.clear();//�������
        while(n--)
        {
            cin>> s;//��������Ҳ������get(s)
            for(int i=0;i<s.length();i++) s[i]=tolower(s[i]);//ͳһ��Сд����д��toupper
            m[s]++;//�������Ὣ�ظ����ַ����˵���Ȼ���ټ�����
        }
        cout<<m.size() <<endl;//������С
        
    }
    return 0;
}