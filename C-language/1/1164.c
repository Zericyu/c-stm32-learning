#include <stdio.h>
int main()
{
    int m,n,r;

while (scanf("%d%d", &m, &n) !=EOF)
    {
        if (m == 0 && n == 0)
        {
            break;
        }

        while (n != 0)
        {
            r = m % n;
            m = n;
            n = r;
        }

        printf("%d\n", m);
    }

    return 0;
}