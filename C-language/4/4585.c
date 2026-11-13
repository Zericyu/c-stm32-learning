#include <stdio.h>
#include <math.h>

int main()
{
    int n,i;
    double sum=0,s=0;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum=sum+sqrt(i);
        s=s+sum;
    }

    printf("%.2f",s);

    return 0;
}