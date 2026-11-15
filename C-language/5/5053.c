#include <stdio.h>
int main(){
    int N;
    int a,x,b,y;
    int i=0,j=0;
    scanf("%d",&N);
    for(int k=0;k<N;k++){
    scanf("%d %d %d %d",&a,&x,&b,&y);
        if(x==a+b && y!=a+b){
            j+=1;
        }
        else if(y==a+b  && x!=a+b){
            i+=1;
        }
    }
   

    printf("%d %d",i,j);

    return 0;
}