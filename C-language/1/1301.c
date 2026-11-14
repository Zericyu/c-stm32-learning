#include <stdio.h>
int main(){
    int N;
    int a[1000], i, target, count;
   
     while(1)
    {
        scanf("%d", &N);

        if(N == 0){
            break;
        }

        for(i = 0; i < N; i++){
            scanf("%d", &a[i]);
        }

        scanf("%d", &target);

        count = 0;

        for(i = 0; i < N; i++){
            if(a[i] == target){
                count++;
            }
        }

        printf("%d\n", count);
    }
}