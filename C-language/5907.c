#include <stdio.h>

int main()
{
    int m,n,i,x,count=0;

    scanf("%d",&m);
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&x);

        if(x<=m)
        {
            m=m-x;
        }
        else
        {
            count++;
        }
    }

    printf("%d",count);

    return 0;
}
