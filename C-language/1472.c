#include <stdio.h>

int main()
{
    int a;
    int b, c, d;
    int result;

    scanf("%d", &a);

    b = a / 100;
    c = a / 10 % 10;
    d = a % 10;

    result = d * 100 + c * 10 + b;
    printf("%d\n", result);
     return 0;

}