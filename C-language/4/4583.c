#include <stdio.h>
#include <math.h>

int main()
{
    double d,x0,x1=0.0;

    scanf("%lf",&d);
    
     while(1)
    {
        x0=x1;
        x1=cos(x0);

        if(fabs(x0-x1)<d)
        {
            break;
        }
    }

    printf("%.2f\n",x1);

    return 0;

}