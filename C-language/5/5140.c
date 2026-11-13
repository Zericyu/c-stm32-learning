#include <stdio.h>

int main()
{
    int x, y, m, n, r;
    int side, count;

    while (scanf("%d%d", &x, &y) !=EOF)
    {
        m = x;
        n = y;

        while (n != 0)
        {
            r = m % n;
            m = n;
            n = r;
        }

        side = m;
        count = (x / side) * (y / side);

        printf("%d %d\n", side, count);
    }

    return 0;
}