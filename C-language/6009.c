#include <stdio.h>
int main()
{
    int meter;
    double t1,t2;

    scanf("%d",&meter);

    t1=27.0+23+meter/3.0;
    t2=meter/1.2;

    if(t1>t2)
    {
        printf("Walk");
    }

    else if(t1<t2)
    {
        printf("Bike");
    }

    else
    {
        printf("All");
    }

    return 0;

}