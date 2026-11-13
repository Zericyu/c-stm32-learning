#include <stdio.h>

int main(void)
{
    int year, month, day;
    int c, y, w;

    scanf("%d%d%d", &year, &month, &day);

    
    if (month == 1 || month == 2)
    {
        year--;
        month += 12;
    }

    c = year / 100;
    y = year % 100;

    w = y + y / 4 + c / 4 - 2 * c
        + 26 * (month + 1) / 10 + day - 1;

    
    w = (w % 7 + 7) % 7;

    switch (w)
    {
        case 0: printf("Sunday\n"); break;
        case 1: printf("Monday\n"); break;
        case 2: printf("Tuesday\n"); break;
        case 3: printf("Wednesday\n"); break;
        case 4: printf("Thursday\n"); break;
        case 5: printf("Friday\n"); break;
        case 6: printf("Saturday\n"); break;
    }

    return 0;
}