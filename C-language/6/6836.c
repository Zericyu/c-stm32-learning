#include <stdio.h>
int main()
{
    int i;
    double a,max,min,sum;

      for(i = 1; i <= 10; i++)
    {
        scanf("%lf", &a);

        if(i == 1)
        {
            max = a;
            min = a;
        }

        if(a > max)
        {
            max = a;
        }

        if(a < min)
        {
            min = a;
        }

        sum = sum + a;
    }
    
    printf("%.2f\n", (sum - max - min) / 8);

    return 0;
}