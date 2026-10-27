#include <stdio.h>
int main()
{
    int year,month,day;

    scanf("%d\\%d",&year,&month);

    if(month==2)
    {
        if(year%400==0||(year%4==0&&year%100 !=0))
        {
            day=29;
        }
        else
        {
            day=28;
        }
    }
    else if(month==4 || month==6 || month==9 || month==11)
    {
        day=30;
    }
    else
    {
        day=31;
    }

    printf("%d",day);

    return 0;
}