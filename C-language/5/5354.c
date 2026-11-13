#include <stdio.h>
int main()
{
    double a,pay;

    scanf("%lf",&a);

    if(a<=50)
    {
        pay=a;
    }
    else
    pay=50+1.05*(a-50);

    printf("%.2f",pay);
    
    return 0;
}