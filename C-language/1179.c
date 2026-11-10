#include <stdio.h>

int main(void)
{
    int a, b, m, n, r;
    int x, y;

    scanf("%d%d", &a, &b);

    m = a;
    n = b;

    while (n != 0)
    {
        r = m % n;
        m = n;
        n = r;
    }

    x = m;
    y = a / x * b;

    printf("%d %d\n", y, x);

    return 0;
}