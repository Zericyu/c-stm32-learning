#include <stdio.h>
int main(){
    int SUM,i,n;

    while(scanf("%d",&n)!=EOF){
        SUM=0;
        for(i=1;i<=n;i++){
            SUM+=i;
        }
        printf("%d\n",SUM);
        printf("\n");
    }
    return 0;
}