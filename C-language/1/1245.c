#include <stdio.h>

int main()
{
    int M, i, j;
    int a, b;

    while (scanf("%d", &M) != EOF)
    {
        for (i = M / 2; i >= 2; i--)
        {
            a = 1;
            b = 1;

            for (j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    a = 0;
                    break;
                }
            }

            for (j = 2; j < M - i; j++)
            {
                if ((M - i) % j == 0)
                {
                    b = 0;
                    break;
                }
            }

            if (a == 1 && b == 1)
            {
                printf("%d %d\n", i, M - i);
                break;
            }
        }
    }

    return 0;
}
