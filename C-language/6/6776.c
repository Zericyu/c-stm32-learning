#include <stdio.h>
int main()
{
    long long m,n;
    int i;

    scanf("%lld%lld",&m,&n);

    for(i=m;i<=n;i++)
    {
        if(i%9==0)
        {
            printf("%d\n",i);
        }
    }

    return 0;
}