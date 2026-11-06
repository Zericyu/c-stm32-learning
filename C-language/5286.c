#include <stdio.h>

int main(void) 
{
    int x, y, i;
    scanf("%d %d", &x, &y);

    for (i = 1; i <= 7; i++) 
    {
        printf("10.%d: AC %d\n", i, x);
        x = x + y;
    }

    return 0;
}