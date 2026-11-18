#include <stdio.h>

int main(void) {
    int n;
    int i;
    int j;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 0; j < i - 1; j++) {
            printf(" ");
        }
        for (j = 0; j < n; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}