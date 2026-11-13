#include <stdio.h>
int main(){
    int n,T;
    scanf("%d",&T);
    for(int i=1;i<=T;i++){
        scanf("%d",&n);

        int sum=0,next=1;

        while(sum+next<=n){
            sum+=next;
            next+=2;
        }
        printf("%d\n",sum);
    }
    return 0;
}