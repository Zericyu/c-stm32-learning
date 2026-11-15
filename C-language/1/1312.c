#include <stdio.h>

int main()
{
    int n, u, d;

    while (scanf("%d%d%d", &n, &u, &d) == 3 && n != 0)
    {
        int height = 0;
        int time = 0;

        while (height < n)
        {
            height += u;
            time++;

            if (height >= n)
            {
                break;
            }

            height -= d;
            time++;
        }

        printf("%d\n", time);
    }

    return 0;
}
