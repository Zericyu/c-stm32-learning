/*#include <stdio.h>

int main(void)
{
    int a, b, m, n, r;
    int x, y;

    scanf("%d%d", &a, &b);

    m = a;
    n = b;

    while (n != 0)
    {
        r = m % n;
        m = n;
        n = r;
    }

    x = m;
    y = a / x * b;

    printf("%d %d\n", y, x);

    return 0;
}*/
#include <stdio.h>
int main(){
    int m,n,t,a,b;
    scanf("%d %d",&m,&n);

    a=m;
    b=n;//把mn存进ab里  用ab进行运算 保留mn的值 用于最后输出

    while(b!=0){
        t=a%b;//大除小求余
        a=b;
        b=t;//大数变小数，小数变余数
    }


    int x=a;//最小公约数
    int y=m/x*n;//最大公倍数
    printf("%d %d\n",y,x);
    return 0;
}