#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);

    if(a>66)
    {
        printf("bigger");
    }

    else if(a==66)
    {
        printf("right");
    }

    else 
        printf("smaller");

    return 0;
}