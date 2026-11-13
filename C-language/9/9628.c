#include <stdio.h>
int main()
    {
        double r,h,v,s;

        scanf("%lf%lf",&r,&h);

        s=(3.14*r*r)+(3.14*2*r*h);
        v=3.14*r*r*h;

        printf("%.2f\n%.2f",s,v);

        return 0;
    }