#include <stdio.h>

int main()
{
    int N, i;

    scanf("%d", &N);

    for(i = 1; i <= N; i++)
    {
        if(i%15==0)
        {
            printf("DeadMan\n");
        }
        else if(i%3==0)
        {
            printf("Dead\n");
        }
        else if(i%5==0)
        {
            printf("Man\n");
        }
        else
        {
            printf("%d", i);

            if(i == N)         
        {
            printf("\n");
        }
            else                
        {
            printf(" ");
        }
        }
        
    }

    return 0;
}
