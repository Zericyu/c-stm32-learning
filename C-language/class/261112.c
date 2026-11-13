/*#include <stdio.h>
int main()
{
    int n, i, flag;

    while (scanf("%d", &n) !=EOF)
    {
        flag = 1;

        for (i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
}
#include <stdio.h>
int main()
{
    int n,i,flag=1;
    int a,b=0;
    scanf("%d",&n);

    a=n;
    while(a>0)
    {
        b=b*10+a%10;
        a=a/10;
    }

    if(n<2)
    {
        flag=0;
    }
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            flag=0;
            break;
        }
    }

     if (b == n && flag == 1)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }

    return 0;
}
#include <stdio.h>
int main()
{
    int N,i=1,sum=0;

    while (scanf("%d", &N) == 1)
    {
        i = 1;
        sum = 0;

        while (i <= N)
        {
            sum += i;
            i++;
        }

        printf("%d\n", sum);
    }
    
    return 0;
}*/
#include <stdio.h>

int main()
{
    int m, n, i;
    int a, b, c, flag;

    while (scanf("%d%d", &m, &n) !=EOF)
    {
        flag = 0;

        for (i = m; i <= n; i++)
        {
            a = i / 100;       
            b = i / 10 % 10;   
            c = i % 10;        

            if (a * a * a + b * b * b + c * c * c == i)
            {
                if (flag > 0)
                {
                    printf(" ");
                }

                printf("%d", i);
                flag++;
            }
        }

        if (flag == 0)
        {
            printf("no");
        }

        printf("\n");
    }

    return 0;
}