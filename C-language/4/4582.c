#include <stdio.h>
int main(){
    int i,n;
    double sum=0.0;

    scanf("%d",&n);
    for(i=1;i<=n;i++){
        double a=2.0/((1+i)*i);
        sum+=a;
    }

    printf("%.2f",sum);
    return 0;
}