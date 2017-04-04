#include <stdio.h>
char D[][10]={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
int year[2] = {365,366};
int month[2][12] = {{31,28,31,30,31,30,31,31,30,31,30,31},
                    {31,29,31,30,31,30,31,31,30,31,30,31}};
int Yeap(int year){
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return 1;
    return 0;
}
int main()
{
    int days;
    while (~scanf("%d",&days) && days != EOF){
        int y,m,t = (days-1)%7;;    
        for (y = 2000;days >= year[Yeap(y)];y++) 
            days -= year[Yeap(y)];
        for (m = 0;days >= month[Yeap(y)][m];m++) 
            days -= month[Yeap(y)][m];
        printf("%d-%02d-%02d %s\n",y,m+1,days+1,D[t]);
    }
    return 0;
}