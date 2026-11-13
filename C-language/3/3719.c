#include <stdio.h>

int main()
{
    int n;
    long long sum;

    while (scanf("%d", &n) == 1)
    {
        sum = 0;

        for (int i = 1; i <= n; i++)
        {
            sum = sum + i;
        }

        printf("%lld\n", sum);
    }

    return 0;
}
