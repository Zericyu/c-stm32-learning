#include <stdio.h>

int main(){
    int a,b;

    while(scanf("%d%d",&a,&b)!=EOF){
        if(a==0&&b==0){
            break;
        }

        int first=1;

        for(int i=0;i<100;i++){
            if((a*100+i)%b==0){
                if(first==0){
                    printf(" ");
                }

                printf("%02d",i);
                first=0;
            }
        }

        printf("\n");
    }

    return 0;
}
