#include <stdio.h>
int main()
{
    int a, b, c, x, y, z, min;

    scanf("%d%d%d", &a, &b, &c);

    x = a * b % c;
    y = a * c % b;
    z = b * c % a;

    min = x;

    if (y < min)
        min = y;

    if (z < min)
        min = z;

    printf("%d", min);

    return 0;
}
