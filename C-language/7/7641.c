#include <stdio.h>
void BubbleSort(int a[], int n, int m)
{
    int i, j, t;

    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
                if(m == 0)
            {
                    if(a[j] > a[j+1])
                {
                    t = a[j];
                    a[j] = a[j+1];
                    a[j+1] = t;
                }
            }       
                else
            {
                    if(a[j] < a[j+1])
                {
                    t = a[j];
                    a[j] = a[j+1];
                    a[j+1] = t;
                }
            }
        }
    }
}
int main()
{
    int n, m, a[10000], i;

    scanf("%d%d", &n, &m);

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    BubbleSort(a, n, m);

    for(i=0; i<n; i++)
{
    if(i>0)
    {
        printf(" ");
    }

    printf("%d", a[i]);
}

printf("\n");

    return 0;
}