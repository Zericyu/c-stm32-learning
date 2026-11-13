#include <stdio.h>
int main()
{
    int n,month;
    int previous=1,current=1;

    scanf("%d",&n);

     for (month = 3; month <= n; ++month) 
    {
        int next = previous + current;
        previous = current;
        current = next;
    }

    printf("%d",current);

    return 0;
}