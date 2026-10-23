#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, x1, x2, d;

    scanf("%lf%lf%lf", &a, &b, &c);

    d = b * b - 4 * a * c;

    x1 = (-b + sqrt(d)) / (2 * a);
    x2 = (-b - sqrt(d)) / (2 * a);

    if (x1 < x2)
    {
        double t = x1;
        x1 = x2;
        x2 = t;
    }

    printf("%.2f %.2f", x1, x2);

    return 0;
}
