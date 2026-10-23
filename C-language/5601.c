#include <stdio.h>
int main()
{
    int a,b,max,min;

    scanf("%d  %d",&a,&b);

    if(a>b)
    {
        max=a;
        min=b;
    }
    else
    {
        max=b;
        min=a;
    }

    if(max%min==0)
    {
        printf("%d/%d=%d",max,min,max/min);
    }
    else
    {
        printf("%d/%d=%d...%d",max,min,max/min,max%min);

    }
        
    return 0;
}