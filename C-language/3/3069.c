#include <stdio.h>

int main(){
    int n;
    int score[100];
    int m;
    int count=0;

    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&score[i]);
    }

    scanf("%d",&m);

    for(int i=0;i<n;i++){
        if(score[i]>m){
            count++;
        }
    }

    printf("%d",count+1);

    return 0;
}
