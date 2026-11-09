#include <stdio.h>
int main()
{
    int n,i,s=0,sum=0;

    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        s=s+i;
        sum=sum+s;
    }

    printf("%d",sum);

    return 0;
}