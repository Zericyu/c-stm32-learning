#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    double d, x1, x2, t;
    double m, n;

    scanf("%lf %lf %lf", &a, &b, &c);

    d = b*b - 4*a*c;

    if (d >= 0)
    {
        x1 = (-b + sqrt(d)) / (2*a);
        x2 = (-b - sqrt(d)) / (2*a);

        if (x1 < x2)
        {
            t = x1;
            x1 = x2;
            x2 = t;
        }

        printf("%.2f %.2f", x1, x2);
    }
    else
    {
        m = -b / (2*a);
        n = sqrt(-d) / (2*fabs(a));

        printf("%.2f+%.2fi %.2f-%.2fi", m, n, m, n);
    }

    return 0;
}