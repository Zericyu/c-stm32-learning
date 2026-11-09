void Bubble(int a[], int i, int n)
{
    int j, t;

    for(j=0; j<n-i; j++)
    {
        if(a[j] > a[j+1])
        {
            t = a[j];
            a[j] = a[j+1];
            a[j+1] = t;
        }
    }
}

/*
#include <stdio.h>

// 1. 输出数组
void print(int a[], int n)
{
    int i;

    for(i=0; i<n; i++)
    {
        if(i)
            printf(" ");

        printf("%d", a[i]);
    }

    printf("\n");
}

// 2. 完成一趟冒泡排序
void Bubble(int a[], int i, int n)
{
    int j, t;

    for(j=0; j<n-i; j++)
    {
        if(a[j] > a[j+1])
        {
            t = a[j];
            a[j] = a[j+1];
            a[j+1] = t;
        }
    }
}

// 3. 控制冒泡排序的次数
void BubbleSort(int a[], int n)
{
    int i;

    for(i=1; i<n; i++)
    {
        Bubble(a, i, n);
        print(a, n);
    }
}

// 4. 主函数
int main()
{
    int i, n, a[300];

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    BubbleSort(a, n);

    return 0;
}
*/