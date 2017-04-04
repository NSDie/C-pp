#include<iostream>
using namespace std;
int main()
{
    int n,t;
    double d,sum_s=0;
    int min,s;
    char h,m1,m2,s1,s2;
    bool flag=true;
    int i;
    scanf("%d%lf",&n,&d);
    while(scanf("%d",&t)!=EOF)
    {
        flag=true;
        sum_s=0;
        for(i=0;i<n;i++)
        {
            getchar();//注意回车以及空格
            scanf("%c:%c%c:%c%c",&h,&m1,&m2,&s1,&s2);
            if(h=='-') flag =false;
            if(!flag) continue;
            else 
                s=(h-'0')*3600+((m1-'0')*10+(m2-'0'))*60+(s1-'0')*10+(s2-'0');
            sum_s+=s; 
        }
        if(flag)
        {
            s=1.0*sum_s/d+0.5;//四舍五入
            printf("%3d: %d:%02d min/km\n",t,s/60,s%60);
        }
        else printf("%3d: -\n",t);
    }
    return 0;
}