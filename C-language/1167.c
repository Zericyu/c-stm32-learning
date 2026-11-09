#include <stdio.h>

int main()
{
    int n, i;
    double a = 2, b = 1;
    double sum = 0, t;

    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        sum = sum + a / b;

        t = a;
        a = a + b;
        b = t;
    }

    printf("%.6f\n", sum);

    return 0;
}
