#include <stdio.h>

int main()
{
    int n;

    while (scanf("%d", &n) !=EOF)
    {
        int count = 0;

        for (int i = 0; i < n; i++)
        {
            int h, l;
            scanf("%d%d", &h, &l);

            if (h >= 90 && h <= 140 && l >= 60 && l <= 90)
            {
                count++;
            }
        }

        printf("%d\n", count);

        if (count == n)
        {
            printf("Perfect\n");
        }
        else if (count == 0)
        {
            printf("Terrible\n");
        }
    }

    return 0;
}