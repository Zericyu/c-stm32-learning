#include <stdio.h>
int main()
{
    int a[9],temp,i;

    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(i = 0; i < 5; i++){
        temp = a[i];
        a[i] = a[9-i];
        a[9-i] = temp;
    }

    for(i = 0; i < 10; i++){
        printf("%d", a[i]);

        if(i < 9)
        {
            printf(" ");
        }
    }

    return 0;
}