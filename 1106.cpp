#include<iostream>
using namespace std;

int s[10];
bool judge(int n)
{
  int i;
  if(n==0) return false;
  for(i=9;i>=0;i--)
  {
   if(s [i]<= n) 
    n -= s[i];
   if(n == 0)
    return true;
   if(n < 0)
    return false;                   
  } 
  return false ;
  
}
int main()
{
   int num=1;
   int i;
   int n;
   s[0]=1;
   for(i=1;i<10;i++)
   {
    num *=i;
    s[i]=num;                     
   }
   while(cin>>n)
   {
   if (n<0)  
            break;  
        else  
        {  
            if (judge(n))  
                cout <<"YES"<<endl;
            else  
                cout <<"NO"<<endl;
        }               
   }
   return 0;
}