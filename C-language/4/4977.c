#include <stdio.h>
int main(){
    int A1,A2,n,Sn=0,d;
  
    scanf("%d %d %d",&A1,&A2,&n);
    d=A2-A1;
    int An=A1+(n-1)*d;
    
    for(int i=0;i<n;i++){
        Sn+=A1+i*d;
    }

    printf("%d %d",An,Sn);

    return 0;
}