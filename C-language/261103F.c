#include <stdio.h>
int main()
{
    int w,h;
    double Weight,BMI,Height;

    scanf("%d%d",&w,&h);
    Weight=w/2.0;
    Height=h/100.00;
    BMI=Weight/(Height*Height);

    printf("Weight: %.2fkg\n",Weight);
    printf("Height: %.2fm\n",Height);

    if(BMI<18.5)
    {
        printf("Your body is too thin.");
    }
    else if(BMI<=24)
    {
        printf("Your body is normal.");
    }
    else
    {
        printf("Your body is too fat.");
    }

    return 0;

}