#include <stdio.h>
int main()
{
    int W,X,Y,Z;
    int S;
    scanf("%d%d%d%d",&W,&X,&Y,&Z);
    S=Y*Z-W*(Z-X);
    printf("%d",S);
    return 0;

}