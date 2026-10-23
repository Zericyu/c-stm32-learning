
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    if (n == 0)
    {
        printf("green, parking space is empty");
    }
    else
    {
        printf("red, parking space is occupied");
    }

    return 0;
}
