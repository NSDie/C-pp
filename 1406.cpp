#include<stdio.h>  
#include<string>  
int main ()  
{  
    int i;  
    char str[81];  
    while(gets(str)!=NULL)  
    {  
        for(i=0;str[i]!='\0';i++)  
        {    if ((str[i]>='d' && str[i]<='z') || (str[i]>='D' && str[i]<='Z'))  
        {  
            str[i]=str[i]-3;  
        }  
        else if ((str[i]>='a' && str[i]<'d')|| (str[i]>='A' && str[i]<'D'))  
        {  
            str[i]=str[i]+23;  
        }  
        }
        puts(str);  
    }  
    return 0;  
}
