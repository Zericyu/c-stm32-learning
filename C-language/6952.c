#include <stdio.h>
int main()
{
    int a,n,x;
    double p;
    scanf("%d%d%d",&a,&n,&x);

    p=n/a;

    if(p>x)
    {
        p=x;
    }

    p=p*100.0/x;

    printf("%.0f",p);

    return 0;
}