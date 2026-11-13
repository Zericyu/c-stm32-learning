#include <stdio.h>
int main(){
    int n,count=0;

    scanf("%d",&n);

    for(int a=0;a*20<=n;a++){
        for(int b=0;a*20+b*10<=n;b++){
            int rest=n-a*20-b*10;
            if(rest%5==0){
                count++;
            }
        }
    }


    printf("%d",count);
    return 0;
}