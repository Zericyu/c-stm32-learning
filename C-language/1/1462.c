#include <stdio.h>
int main(){
    int n;
    int a;
    
    scanf("%d",&n);
    while (n--){
        scanf("%d",&a);
        for(int i=1;i<=a;i++){
            for(int j=0;j<i;j++){
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}