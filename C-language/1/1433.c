#include <stdio.h>
#include <math.h>

int main()
{
    int num;
   

    while (scanf("%d", &num) != EOF){

    int found = 0;

for (int x = 1; x * x < num && found == 0; x++)
{
    for (int y = 1; x * x + y * y < num; y++)
    {
        int rest = num - x * x - y * y;
        int z = (int)sqrt(rest);

        if (z * z == rest)
        {
            printf("%d %d %d\n", x, y, z);
            found = 1;
            break;
        }
    }
}
    }
    return 0;
}
