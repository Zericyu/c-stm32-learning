#include <stdio.h>

int main() 
{
    long long a, b, x, y, n;

    scanf("%lld=%lld", &a, &b);

    n = 10;

    while (n <= a) 
    {
        x = a / n;
        y = a % n;

        if (x + y == b) 
        {
            printf("%lld+%lld=%lld", x, y, b);
            return 0;
        }

        n = n * 10;
    }

    printf("Impossible!");

    return 0;
}
