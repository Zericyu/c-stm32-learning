#include <stdio.h>
int main()
{
    int n,flag=0;
    scanf("%d",&n);

    if(n==1 || n==3 || n==5)
    {
        flag=1;
    }
    else
    {
        flag=0;
    }

    if(flag==1)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }

    return 0;
}