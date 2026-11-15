#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    while (T--)
    {
        int N;
        scanf("%d", &N);

        long long sum = 0;
        long long max = 0;
        long long x;

        for (int i = 0; i < N; i++)
        {
            scanf("%lld", &x);

            sum += x;

            if (x > max)
            {
                max = x;
            }
        }

        if (max <= sum - max + 1)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }

    return 0;
}
