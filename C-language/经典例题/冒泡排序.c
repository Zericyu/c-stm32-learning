#include <stdio.h>
int main()
{
    int number[5] = {7, 3, 9,2, 5};
    int i, j, t;

for (i = 0; i < 4; i++)          
{
    for (j = 0; j < 4 - i; j++)  
    {
        if (number[j] < number[j + 1])
        {
            t = number[j];
            number[j] = number[j + 1];
            number[j + 1] = t;
        }
    }
}
    for (i = 0; i < 5; i++)
    {
        printf("%d ", number[i]);
    }
    
    return 0;
}
