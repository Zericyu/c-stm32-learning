#include <stdio.h>
int main()
{
    int m;
    double n; 
    double pay;

    scanf("%lf %d",&n,&m);

     if (n <= 3) 
    {
        pay = 10;
    }
    
    else if (n <= 10)
    {
        pay = 10 + (n - 3) * 2;
    }

    else
    {
        pay = 24 + (n - 10) * 3;
    }

    pay += (m / 5) * 2;

    printf("%d\n", (int)(pay + 0.5));

}