#include <stdio.h>
#include <math.h>
int main()
{
    double x,y;

    scanf("%lf",&x);

    if(0<x && x<1)
    {
        y=10-x*x;
    }

    else if(x>=1 && x<=4)
    {
        y=10-x;
    }
    else
    {
        y=10-2*sqrt(x);
    }

    printf("%.2f",y);

    return 0;
}