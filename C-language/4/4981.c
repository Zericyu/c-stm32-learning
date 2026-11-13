#include <stdio.h>

int main()
{
    int n, i;
    int a[20];
    int last = 0;
    int flag = 1;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(a[i] == 0)
        {
            continue;
        }

        if(last != 0)
        {
            if(a[i] * last > 0)
            {
                flag = 0;
                break;
            }
        }

        last = a[i];
    }

    if(flag == 1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}