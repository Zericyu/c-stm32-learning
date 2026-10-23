#include <stdio.h>
int main ()
{
    int t;
    double pay1,pay2;

    scanf("%d",&t);

    pay1=t*1+t*0.1;

    pay2=80+t*0.1;

    if(pay1<pay2)
    {
        printf("A");
    }
    else if(pay2<pay1)
    {
        printf("B");
    }
    else
    {
        printf("Same");
    }

    return 0;

}