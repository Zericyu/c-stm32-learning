#include <stdio.h>

int main()
{
    int a, p;
    char c;

    scanf("%d", &a);
    scanf(" %c", &c);

    if (a <= 1000)
        p = 8;
    else
        p = 8 + ((a - 1000 + 499) / 500) * 4;

    if (c == 'y')
        p = p + 5;

    printf("%d", p);

    return 0;
}
