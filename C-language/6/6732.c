#include<stdio.h>
int main()
{
    int N,i;
    long long x=1;

    scanf("%d",&N);

    for(i=1;i<=N;i++)
    {
        x=x*i;
    }
    printf("%lld",x);
    return 0;
}