#include <stdio.h>

int main(){

    int a,b,n;

    
    scanf("%d%d%d",&a,&b,&n);

    int rest=a;

    int degit=0;

    for (int i=1;i<=n;i++){
       
        rest*=10;
        degit=rest/b;
        rest%=b;
    }
    
    printf("%d\n",degit);
  
    return 0;
}