#include <stdio.h>
#include <math.h>

int main(){
    double x, result;
    int n, i;

    scanf("%lf%d", &x, &n);

    result = x;

    for (i = 1; i <= n; i++)
    {
        result = sqrt(i + result);
    }

    printf("%.2f\n", result);

    return 0;
}