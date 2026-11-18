#include <stdio.h>
int main(){
    int n;
  
    scanf("%d",&n);
//2*n-1是总行数
    for(int i=1;i<=2*n-1;i++){
        int k;  //单行最大值
        if (i <= n){
            k=i;
        }
        else{
            k=2*n-i;
            //打印的数字递减
        }  
          //if-else解决打多少个数字
    
        for(int j=1;j<=n-k;j++){
            printf(" ");
        }  //打印前置空格

        for(int j=1;j<=k;j++){
            printf("%d",j);
        }  //打印递增数字

        for(int j=k-1;j>=1;j--){
            printf("%d",j);
        }  //打印递减数字

        printf("\n");//打印完一行后换行

    }

    return 0;
}