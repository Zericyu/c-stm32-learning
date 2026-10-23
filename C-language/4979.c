#include <stdio.h>
int main()
{
    int a,b,c,d;

    scanf("%d. %d. %d. %d", &a, &b, &c, &d);

    if(a>=0 && b>=0 && c>=0 && d>=0 && a<=255 && b<=255 && c<=255 && d<=255)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}



