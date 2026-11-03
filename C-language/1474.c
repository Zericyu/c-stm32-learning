#include <stdio.h>

int main(void) 
{
    int n;
    int temp;
    int count = 0;
    int divisor = 1;

    scanf("%d", &n);

  
    temp = n;
    while (temp > 0) 
    {
        count++;
        temp /= 10;

        if (temp > 0) 
        {
            divisor *= 10;
        }
    }


    printf("%d\n", count);

  
    temp = n;
    while (divisor > 0) 
    {
        printf("%d", temp / divisor);
        temp %= divisor;
        divisor /= 10;

        if (divisor > 0) 
        {
            printf(" ");
        }
    }
    printf("\n");

  
    temp = n;
    while (temp > 0) 
    {
        printf("%d", temp % 10);
        temp /= 10;

        if (temp > 0) 
        {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}