#include <stdio.h>
int main(){
    int N;
    
    int count=0;

    scanf("%d",&N);

    for (int i = 1;i <= N;i++){
        if(i % 3==0){
            count++;

            continue;
        }

        int t = i;
        while(t>0){
            if(t%10==3){
                count++;
                break;
            }
            t/=10;
        }
    }

    printf("%d\n",count);

    return 0;
}