#include <stdio.h>

int main(){
    int n;
    int a=0,b=0;
    int c,d;

    for(int i=0;i<10;i++){
        scanf("%d",&n);

        if(n%2==0){
            b++;
            d=n;
        }
        else{
            a++;
            c=n;
        }
    }

    if(a==1){
        printf("%d",c);
    }
    else{
        printf("%d",d);
    }

    return 0;
}
