#include <stdio.h>
int main()
{
    int a,b;

    scanf("%d",&a);

    if(a==1)
    {
        b=7;
    }
    else if(a==2)
    {
        b=5;
    }
    else if(a==3)
    {
        b=4;
    }
    else if(a==4)
    {
        b=3;
    }
    else if(a==5)
    {
        b=2;
    }
    else if(a==6)
    {
        b=1;
    }
    else
    {
        printf("Error");
        return 0;
    }

    printf("%d",b);

    return 0;
}