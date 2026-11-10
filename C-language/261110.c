/*#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, x, max;

    scanf("%d", &n);
    scanf("%d", &max);

    for (int i = 1; i < n; i++)
    {
        scanf("%d", &x);

        if (fabs((x)) > fabs((max)))
        {
            max = x;
        }
    }

    printf("%d", max);

    return 0;
}*/

/*#include <stdio.h>
int main()
{
    int n,count=0;
    
    scanf("%d",&n);

   while(n!=1)
   {
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = (3 * n + 1) / 2;
        }

        count++;
   }
    printf("%d",count);

    return 0;
}*/

#include <stdio.h>
int main()
{
    long long m,n,r,t;
    
    scanf("%lld%lld",&m,&n);

    if(m<n)
    {
        t=m;
        m=n;
        n=t;
    }

    r=m%n;
    
     while (r != 0)
    {
        m = n;
        n = r;
        r = m % n;
    }

    printf("%lld",n);

    return 0;
}