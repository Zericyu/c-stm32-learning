#include <stdio.h>
int main()
{
    int n,i,a;
    int day=0,sum=0;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&a);

        if(a==1)
        {
            day++;
            if(day>50)
            {
                day=50;
            }
            sum=sum+day;  
        }
        else
        {
            day=0;
        }
    }

    printf("%d\n",sum);

    return 0;
}