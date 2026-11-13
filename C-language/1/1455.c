#include <stdio.h>

int main()
{
    int a,n,i,t,s;

    while(scanf("%d%d",&a,&n)!=EOF)
    {
        t=0;
        s=0;

        for(i=1;i<=n;i++)
        {
            t=t*10+a;
            s=s+t;
        }

        printf("%d\n",s);
    }

    return 0;
}