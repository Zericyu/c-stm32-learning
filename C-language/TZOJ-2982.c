#include <stdio.h>
 int main ()
 {
    double r;
    double d, c, s;

    scanf("%lf",&r);
    d=2*r;
    c = 2 * 3.14159 * r;
    s = 3.14159 * r * r;

    printf("%.2f %.2f %.2f",d,c,s);
    return 0;
 }