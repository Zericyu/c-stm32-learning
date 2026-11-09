#include <stdio.h>
int main()
{
    int n=1;
    double a=1,sum=1;

    printf("n e\n");
    printf("- -----------\n");
    printf("0 1\n");

    while (n<=9)
    {
        a=a*n;
        sum=sum+1.0/a;

        if (n == 1)
        {
            printf("%d %.0f\n", n, sum);
        }
        else if (n == 2)
        {
            printf("%d %.1f\n", n, sum);
        }
        else
        {
            printf("%d %.9f\n", n, sum);
        }

        n++;
    }

    return 0;

}