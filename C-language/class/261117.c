//第一题
#include <stdio.h>

int main()
{
    for (int x = 0; x <= 20; x++)
    {
        for (int y = 0; y <= 33; y++)
        {
            int z = 100 - x - y;

            if (15 * x + 9 * y + z == 300)
            {
                printf("%d %d %d\n", x, y, z);
            }
        }
    }

    return 0;
}
//第二题
#include <stdio.h>

int main()
{
    int h, i, j, k;

    scanf("%d", &h);

    for (i = 1; i <= h; i++)
    {
        int n = i;

        if (i > (h + 1) / 2)
        {
            n = h - i + 1;
        }

        for (j = 1; j <= (h + 1) / 2 - n; j++)
        {
            printf(" ");
        }

        for (k = 1; k <= 2 * n - 1; k++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
//第三题
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    for(int row=1;row<=2*n-1;row++){
        int max=row;
        if(row>n){
            max = 2*n-row;
        }
            for(int i=0;i<n-max;i++){
                printf(" ");
            }
            for(int i=1;i<=max;i++){
                printf("%d",i);
            }
            for(int i=max-1;i>=1;i--){
                printf("%d",i);
            }
        printf("\n");
    }

    return 0;

}

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);  // n 是菱形中间那一行最大的数字

    // 共 2 * n - 1 行，row 表示当前是第几行
    for (int row = 1; row <= 2 * n - 1; row++)
    {
        int max = row;  // 上半部分和中间行，最大数字等于行号

        if (row > n)
        {
            max = 2 * n - row;  // 过了中间行，最大数字逐行减小
        }

        // 先打印 n - max 个空格，让这一行居中
        for (int i = 0; i < n - max; i++)
        {
            printf(" ");
        }

        // 从 1 打印到 max，包含中间最大的数字
        for (int i = 1; i <= max; i++)
        {
            printf("%d", i);
        }

        // 从 max - 1 倒着打印到 1，避免把 max 打印两次
        for (int i = max - 1; i >= 1; i--)
        {
            printf("%d", i);
        }

        printf("\n");  // 一整行打印完，再换行
    }

    return 0;
}



//第四题
#include <stdio.h>
int main(){
    int n;
    int count=0;
    scanf("%d",&n);
    for(int ershi=0;ershi*20<=n;ershi++){
        for(int shi=0;shi*10+ershi*20<=n;shi++){
            for(int wu=0;wu*5+shi*10+ershi*20<=n;wu++){
                int total = ershi * 20 + shi * 10 + wu * 5;

                if (total == n)
                {
                    count++;
                }
            }
        }
    }
    printf("%d",count);
    return 0;
}
//第五题
#include <stdio.h>
int main(){
    int n;
    
    while (scanf("%d",&n)!=EOF){
        int max=0,id=0;
        int i=1;
        while(n--){
            int x;
            scanf("%d",&x);
            if(x>max){
                max=x;
                id=i;
            }
            i++;
        }
        printf("%d %d\n",max,id);
    }
    return 0;
}