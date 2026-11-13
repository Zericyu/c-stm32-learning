/*#include <stdio.h>
int main()
{
    int n,a,sum=0;
    char b;

    scanf("%d",&n);
    while(scanf(" %c %d",&b,&a)!=EOF)
{
    sum=sum+a;
}

printf("%d",sum);
return 0;

}*/

#include <stdio.h>

int main()
{
    int n,a,sum,i;
    char b;

    while(scanf("%d",&n)!=EOF)
    {
        sum=0;

        for(i=0;i<n;i++)
        {
            scanf(" %c %d",&b,&a);
            sum=sum+a;
        }

        printf("%d\n",sum);
    }

    return 0;
}