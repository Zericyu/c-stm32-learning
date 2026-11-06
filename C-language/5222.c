#include <stdio.h>
int main()
{
    int n,i,a=0,b=0,x;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);

        if(x%2==0)
        {
            a=a+1;
        }
        else
        {
            b=b+1;
        }
    }

    printf("%d %d",b,a);

    return 0;
}