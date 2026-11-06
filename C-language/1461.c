#include <stdio.h>
int main()
{
    int m,i;
    double n,sum=0,a;
    
    scanf("%d",&m);

    for(i=1;i<=m;i++)
    {
        scanf("%lf",&n);
        
        sum=sum+n;
    }

    a=sum/m;
    printf("%.2f",a);
    return 0;

}