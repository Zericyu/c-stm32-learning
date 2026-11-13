#include <stdio.h>

int main()
{
    int w, h;
    double kg, m, bmi;

    scanf("%d%d", &w, &h);

    kg = w / 2.0;
    m = h / 100.0;
    bmi = kg / (m * m);

    printf("Weight: %.2fkg\n", kg);
    printf("Height: %.2fm\n", m);

    if (bmi < 18.5)
    {
        printf("Your body is too thin.");
    }
    else if (bmi <= 24)
    {
        printf("Your body is normal.");
    }
    else
    {
        printf("Your body is too fat.");
    }

    return 0;
}
