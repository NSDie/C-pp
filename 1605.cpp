#include <iostream>
using namespace std;
bool isleap(int year)
{
	return (year%4==0 && year%100!=0 || year%400==0);
}
int main()
{
	int n,y,m,d,i,j,th,t;
	int month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
		{
		    cin>>y>>m>>d;
			th=y-1958;
			t=0;
			if(isleap(y))
				month[2]=29;
			else
				month[2]=28;
			if(m<10)
			{
				t+=(month[m]-d);
				for(j=m+1;j<10;j++)
					t+=month[j];
				t+=25;
			}
			else if(m>10)
			{
				th++;
				if(m==11)
				{
					t+=(month[m]-d);
					t+=month[12];
				}
				else if(m==12)
					t+=(month[m]-d);
				if(isleap(y+1))
					month[2]=29;
				else
					month[2]=28;
				for(j=1;j<10;j++)
					t+=month[j];
				t+=25;
			}
			else if(m==10)
			{
				if(d<=25)
					t=25-d;
				else
				{
					th++;
					t+=(month[m]-d);
					for(j=11;j<=12;j++)
						t+=month[j];
					if(isleap(y+1))
						month[2]=29;
					else
						month[2]=28;
					for(j=1;j<10;j++)
						t+=month[j];
					t+=25;
				}
			}
			cout<<t<<" days left for celebrating the "<<th<<"th anniversary of the founding of Fuzhou University!"<<endl;
		}
	}
	return 0;
}