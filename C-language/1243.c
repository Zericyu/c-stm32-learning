#include <stdio.h>

int main()
{
    int N, i;
    long long n;

    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        int count = 0;
        scanf("%lld", &n);

        while (n > 1)
        {
            if (n % 2 == 0)
            {
                n = n / 2;
            }
            else
            {
                if (count > 0)
                {
                    printf(" ");
                }

                printf("%lld", n);
                count++;
                n = 3 * n + 1;
            }
        }

        if (count == 0)
        {
            printf("No number can be output !");
        }

        printf("\n");
    }

    return 0;
}