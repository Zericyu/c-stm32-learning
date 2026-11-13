/*#include <stdio.h>
int main(){
    int T,i;
    int a,x,b,y,Yu,Kang;

    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%d\n",&a);
        scanf("%d\n",&x);
        scanf("%d\n",&b);
        scanf("%d\n",&y);

        Yu=a*x;
        Kang=b*y;
        if(Yu>Kang){
            pirntf("YuYu\n");
        }
        else if(Yu<Kang){
            printf("KangKang\n");
        }
        else{
            printf("Same");
        }
    }

    return 0;
}*/
#include <stdio.h>

int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++){
         int a, b, value;
         int Yu = 0, Kang = 0;

        scanf("%d", &a);
        while (a > 0){
            scanf("%d", &value);
            Yu += value;
            a--;
        }

        scanf("%d", &b);
        while (b > 0){
            scanf("%d", &value);
            Kang += value;
            b--;
        }

        if (Yu > Kang){
            printf("YuYu\n");
        }
        else if (Yu < Kang){
            printf("KangKang\n");
        }
        else{
            printf("Same\n");
        }
    }

    return 0;
}