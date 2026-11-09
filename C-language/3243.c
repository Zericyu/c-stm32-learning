#include <stdio.h>
int main()

{
    int n,m,sum=0,i;

    scanf("%d %d",&n,&m);

    for(i=n;i<=m;i++)
    {
        sum=sum+i*i;
    }

    printf("%d",sum);


    return 0;

}