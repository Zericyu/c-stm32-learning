#include <stdio.h>
int main(){
    int n,m,b;
    int a[51];//记录格子对应的位置

    int x=1;//初始位置
    
    scanf("%d",&n);//多少格子

    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }//输入格子上面的数字

    scanf("%d",&m);//抛多少次

    for(int j=1;j<=m;j++){
        scanf("%d",&b);

        if(x==n){
            x=1;
        }//如果停在终点，从起点出发

        x+=b;//抛投子得到的结果

        if(x>=n){
            x=n;
        }//如果超过终点，停在终点

        else if(a[x]==-1){
            x--;
        }//-1就后退一步
        
        else if(a[x]==1){
            x++;//1就前进一步
        }
        printf("%d\n",a[x]);
    }

    return 0;

}