#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);

    if(a>=0 && a<=50)
    {
        printf("Good");
    }
    else if(a<=100)
    {
        printf("Moderate");
    }
    else if(a<=150)
    {
        printf("Unhealthy for Sensitive Groups");
    }
    else if(a<=200)
    {
        printf("Unhealth");
    }
    else if(a<=300)
    {
        printf("Very Unhealthy");
    }
    else
    {
        printf("Hazardous or Beyond Index");
    }

    return 0;
}