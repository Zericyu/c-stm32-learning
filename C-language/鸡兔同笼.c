#include <stdio.h>
int main()
{
    int n,m;
    int r,c;

    scanf("%d %d",&n,&m);

    r = (m - 2 * n) / 2;
    c = n - r;

    printf("%d %d",c,r);

    return 0;
}
