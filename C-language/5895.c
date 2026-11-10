#include <stdio.h>
int main()
{
    int i,n,a;
    int x=0,y=0,z=0;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d\n",&a);

        switch(a)
        {
            case(1) :x++;break;
            case(5) :y++;break;
            case(10):z++;break;
        }
    }

    printf("%d\n%d\n%d",x,y,z);
    return 0;

}