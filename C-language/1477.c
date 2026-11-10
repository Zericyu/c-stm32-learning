#include <stdio.h>

int main()
{
    double x,t=1.0,s=1.0;
    int n,i;

    scanf("%lf%d",&x,&n);

    for(i=1;i<=n;i++)
    {
        t=-t*x*x/((2*i-1)*(2*i));
        s=s+t;
    }

    printf("%.4f\n",s);

    return 0;
}