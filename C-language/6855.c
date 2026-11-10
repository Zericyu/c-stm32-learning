#include <stdio.h>
int main()
{
    int n,m,i;
    int a,b,c;
    
    scanf("%d\n%d",&n,&m);

    for(i=n;i<=m;i++)
    {
        a=i/100;
        b=i/10%10;
        c=i%10;
        if(a*a*a+b*b*b+c*c*c==i)
        {
            printf("%d\n",i);
        }
    }

    return 0;
}