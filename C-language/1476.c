#include <stdio.h>
int main()
{
    int n,i;
    double x=0.0,y;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        y=1.0/(4*i-3)-1.0/(4*i-1);
        x=x+y;
    }

    printf("%.5f",4*x);
    
    return 0;
}