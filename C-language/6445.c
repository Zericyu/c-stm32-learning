#include <stdio.h>
int main()
{
    int people,n;

    scanf("%d",&people);

    if(people%6==0)
    {
        n=people/6;
    }
    else
    
        n=(people/6)+1;

    printf("%d",n);

    return 0;
}