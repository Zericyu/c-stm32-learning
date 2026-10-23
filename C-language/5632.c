#include <stdio.h>
#include <math.h>

int main()
{
    double x1, y1, x2, y2, x3, y3;
    double a, b, c, min, max;

    scanf("%lf%lf", &x1, &y1);
    scanf("%lf%lf", &x2, &y2);
    scanf("%lf%lf", &x3, &y3);

    a = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
    b = sqrt((x1-x3)*(x1-x3) + (y1-y3)*(y1-y3));
    c = sqrt((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3));

    min = a;
    max = a;

    if (b < min) min = b;
    if (c < min) min = c;

    if (b > max) max = b;
    if (c > max) max = c;

    printf("%.2f %.2f\n", min, max);

    return 0;
}
