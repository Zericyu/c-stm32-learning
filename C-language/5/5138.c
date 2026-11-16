#include <stdio.h>
int main(){
    int clap=0;
    int n,i;
    scanf("%d",&n);

    for(i=n;i<=1000;i+=3){
        int t=i;

        while(t>0){
            int x=t%10;

            if(x==4 || x==7){
                printf("%d\n",i);
                clap=1;
                break;
            }
             t /= 10;
        }
    }

    if(clap==0){
        printf("Smile");
    }
    return 0;
}