#include <stdio.h>

int main(){
    int arr[101];
    int count=0;

    for(int i=100;i<=200;i++){
        int flag=1;

        for(int j=2;j<i;j++){
            if(i%j==0){
                flag=0;
                break;
            }
        }

        if(flag==1){
            arr[count]=i;
            count++;
        }
    }

    printf("%d\n",count);

    for(int i=0;i<count;i++){
        if(i>0){
            printf(" ");
        }
        printf("%d",arr[i]);
    }

    return 0;
}
