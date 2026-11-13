#include <stdio.h>

int main()
{
    int h,m,n,i;

    scanf("%d:%d",&h,&m);

    if(h<12 || (h==12 && m==0))
    {
        printf("Only %02d:%02d.  Too early to Dang.\n",h,m);
    }
    else
    {
        n=h-12;

        if(m>0)
        {
            n++;
        }

        for(i=1;i<=n;i++)
        {
            printf("Dang");
        }

        printf("\n");
    }

    return 0;
}