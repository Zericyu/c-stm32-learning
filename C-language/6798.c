#include <stdio.h>
int main()
{
    int n,a;

    scanf("%d",&n);

    a=4*n-4;

    if(n==1)
    {
        a=1;
    }

    printf("%d",a);

    return 0;
}