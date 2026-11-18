#include <stdio.h>
int main(){
    int A,B,K;

  while(scanf("%d %d %d",&A,&B,&K) && A!=0 && B!=0){
   int base=1;

        for(int i=0;i<K;i++){
            base*=10;
        }

        if(A%base==B%base){
            printf("-1\n");
        }
        else{
            printf("%d\n",A+B);
        }
  }
  return 0;
}

//%10->取最后一位
//%100->取最后两位
//依次类推