#include <stdio.h>
int main(){
    int C;
    scanf("%d",&C);

    for (int i=0;i<C;i++){
        int n,count=0;
        scanf("%d",&n);

        while (n>0){
            if(n%2==1){
             count++;
             n--;   
            }
            n/=2;
        }
        printf("%d\n",count);
    }

    return 0;
}