#include <stdio.h>

int main(){
    int L,M;
    int tree[10001];
    int a,b;
    int count=0;

    scanf("%d %d",&L,&M);

   
    for(int i=0;i<=L;i++){
        tree[i]=1;
    }

  
    for(int i=0;i<M;i++){
        scanf("%d %d",&a,&b);

        for(int j=a;j<=b;j++){
            tree[j]=0;
        }
    }

 
    for(int i=0;i<=L;i++){
        if(tree[i]==1){
            count++;
        }
    }

    printf("%d",count);

    return 0;
}
