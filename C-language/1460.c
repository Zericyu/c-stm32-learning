#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,max;

    scanf("%d",&n);

    scanf("%d",&max);

    for(int i=1;i<n;i++)
    {
        scanf("%d",&a);

        if(abs(a)>abs(max))
        {
            max=a;
        }
    }

    printf("%d",max);

    return 0;
}