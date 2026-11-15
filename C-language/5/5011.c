#include <stdio.h>
int main(){
    int B,S,n;
    int x;
    int i;
    scanf("%d",&x);
    B=x/100;
    S=x/10%10;
    n=x%10;

    for(i=0;i<B;i++){
        printf("B");
    }
    for(i=0;i<S;i++){
        printf("S");
    }
    for(i=1;i<=n;i++){
        printf("%d",i);
    }
    return 0;
}