#include <stdio.h>
int main(){
    int A,B;
    while(scanf("%d %d",&A,&B)!=EOF){
        if(A==0 && B==0){
            break;
        }
        int result=1;

        for(int i=0;i<B;i++){
            result=result*A%1000;
        }

        printf("%d\n",result);
    }
    return 0;
}