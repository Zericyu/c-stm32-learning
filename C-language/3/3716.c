/*#include <stdio.h>
int main(){
    int T;
    int n;
    int a=1,sum=0,d=1;

    for(int i=0;i<T;i++){
        scanf("%d",&n);
            for(int j=1;j<=n;j++){
                sum+=a;
                a+=d;
                d+=1;
            }
        printf("%d\n",sum);
    }
    return 0;
}*/
#include <stdio.h>

int main()
{
    int n;

    while (scanf("%d", &n) == 1)
    {
        int a = 1, sum = 0, d = 1;

        for (int j = 1; j <= n; j++)
        {
            sum += a;
            a += d;
            d += 1;
        }

        printf("%d\n", sum);
    }

    return 0;
}