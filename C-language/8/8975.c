#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    if (n < 1)
    {
        printf("n is too small!");
    }
    else if (n > 9)
    {
        printf("n is too large!");
    }
    else
    {
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= i; j++){
                printf("%d*%d=%d", i, j, i * j);

                if (j < i){
                    printf("\t");
                }
            }

            printf("\n");
        }
    }

    return 0;
}
