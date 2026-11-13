#include <stdio.h>
int main(){
    int t;
    
    scanf("%d",&t);

    while (t--){
        int n, x;
        scanf("%d%d", &n, &x);

        double term = x;
        double sum = 0.0;

        for (int i = 0; i < n; i++){
            sum += term;
            term /= 2.0;
        }

        printf("%.4f\n", sum);
    }

    return 0;
}