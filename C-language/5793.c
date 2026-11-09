#include <stdio.h>
int main()
{
    double n;
    int m,i;

    scanf("%lf",&n);
    scanf("%d",&m);

    for(i=1;i<=m;i++)
    {
        n=n*10;
    }

    printf("%.2f\n",n);

    return 0;
}