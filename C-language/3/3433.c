/*#include <stdio.h>
#include <math.h>

int main()
{
    double y;
    int x;

    while(scanf("%d",&x)!=EOF)
    {
        if(x<=0)
        {
            y=0;
        }
        else if(x<=10)
        {
            y=sqrt(x);
        }
        else
        {
            y=2*x+1;
        }
        printf(".2f",y);
    }

    return 0;
}*/
#include <stdio.h>
#include <math.h>

int main()
{
    int t, x;
    double y;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &x);

        if (x <= 0)
        {
            y = 0;
        }
        else if (x <= 10)
        {
            y = sqrt(x);
        }
        else
        {
            y = 2.0 * x + 1;
        }

        if (y == (long long)y)
        {
            printf("%.0f\n", y);
        }
        else
        {
            printf("%.2f\n", y);
        }
    }

    return 0;
}